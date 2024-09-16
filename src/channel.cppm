/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

module;

#include <vector>
#include <string>
#include <memory>

export module timeline_scene.channel;

export namespace uts {
	class Channel : public std::enable_shared_from_this<Channel> {
	  public:
		virtual ~Channel() = default;

		template<class TEvent, typename... TARGS>
		std::shared_ptr<class Event> AddEvent(TARGS... args);
	};
};
