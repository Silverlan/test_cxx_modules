/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

module;

#include <string>
#include <memory>
#include <vector>

module timeline_scene.channel;

import timeline_scene.event;

template<class TEvent, typename... TARGS>
std::shared_ptr<uts::Event> uts::Channel::AddEvent(TARGS... args)
{
	auto r = Event::template Create<TEvent, TARGS...>(*this, std::forward<TARGS>(args)...);
	m_events.push_back(r);
	r->Initialize();
	return r;
}

void uts::Channel::Initialize() {}
const std::vector<std::shared_ptr<uts::Event>> &uts::Channel::GetEvents() const { return const_cast<Channel *>(this)->GetEvents(); }
std::vector<std::shared_ptr<uts::Event>> &uts::Channel::GetEvents() { return m_events; }

void uts::Channel::Tick(double t, double dt) { HandleTick(t, dt); }
void uts::Channel::Reset()
{
	for(auto &ev : m_events)
		ev->Reset();
}
void uts::Channel::HandleTick(double t, double dt)
{
	for(auto &ev : m_events) {
		auto state = ev->GetState();
		switch(state) {
		case Event::State::Initial:
			if(t < ev->GetStartTime())
				break;
			ev->Start();
		case Event::State::Pending:
			ev->Tick(t, dt);
			break;
		}
	}
}

const std::string &uts::Channel::GetName() const { return m_name; }
void uts::Channel::SetName(const std::string &name) { m_name = name; }
