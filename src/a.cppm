/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

module;

#include <vector>
#include <string>
#include <memory>

export module test_module.channel;

export namespace test_module {
	class A : public std::enable_shared_from_this<A> {
	  public:
		virtual ~A() = default;

		std::shared_ptr<class B> AddEvent();
	};
};
