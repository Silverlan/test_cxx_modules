/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

module;

#include <utility>

module timeline_scene.event;

import timeline_scene.channel;

uts::Event::Event(Channel &channel) : m_channel(channel.shared_from_this()) {}
uts::Channel *uts::Event::GetChannel() const { return m_channel.lock().get(); }
