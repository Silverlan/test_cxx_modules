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
		virtual void Initialize();

		const std::vector<std::shared_ptr<class Event>> &GetEvents() const;
		std::vector<std::shared_ptr<class Event>> &GetEvents();

		const std::string &GetName() const;
		void SetName(const std::string &name);

		void Tick(double t, double dt);
		void Reset();

		template<class TEvent, typename... TARGS>
		std::shared_ptr<class Event> AddEvent(TARGS... args);
	  protected:
		virtual void HandleTick(double t, double dt);

		std::vector<std::shared_ptr<class Event>> m_events = {};
		std::string m_name = {};
	};
};
