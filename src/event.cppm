/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

module;

#include <memory>

export module timeline_scene.event;

export namespace uts {
	class Event : public std::enable_shared_from_this<Event> {
	public:
		class Channel* GetChannel() const {
			return m_channel
				;
		}
	protected:
		class Channel* m_channel;
	};
};
