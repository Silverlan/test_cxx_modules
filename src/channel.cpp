/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

module;

#include <string>
#include <memory>
#include <vector>

module timeline_scene.channel;

import timeline_scene.event;

std::shared_ptr<uts::Event> uts::Channel::AddEvent()
{
	return {};
}

/*template<class TEvent, typename... TARGS>
std::shared_ptr<uts::Event> uts::Channel::AddEvent(TARGS... args)
{
	return {};
}*/
