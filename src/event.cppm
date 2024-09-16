/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

module;

#include <memory>

export module timeline_scene.event;

export namespace uts {
	class Event : public std::enable_shared_from_this<Event> {
	  public:
		template<class TEvent, typename... TARGS>
		static std::shared_ptr<Event> Create(class Channel &channel, TARGS... args);

		class Channel *GetChannel() const;
	  protected:
		Event(class Channel &channel);
		mutable std::weak_ptr<class Channel> m_channel = {};
	};
};

template<class TEvent, typename... TARGS>
std::shared_ptr<uts::Event> uts::Event::Create(class Channel &channel, TARGS... args)
{
	return std::shared_ptr<Event>(new TEvent(channel, std::forward<TARGS>(args)...));
}
