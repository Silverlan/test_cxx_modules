module;

#include <vector>
#include <string>
#include <memory>

export module test_module.channel;

export namespace test_module {
	class A : public std::enable_shared_from_this<A> {
	public:
		virtual ~A() = default;

		class B* AddEvent();
	};
};
