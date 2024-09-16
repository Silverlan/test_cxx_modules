/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

module;

#include <string>
#include <memory>
#include <vector>

module test_module.channel;

import test_module.event;

std::shared_ptr<class test_module::B> test_module::A::AddEvent() { return {}; }
