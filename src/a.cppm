module;

#define DEFINE_IN_CLASS 1

#include <vector>
#include <string>
#include <memory>

export module test_module.channel;

export namespace test_module {
	class A : public std::enable_shared_from_this<A> {
	public:
		virtual ~A() = default;

#if DEFINE_IN_CLASS == 1
		class B* AddB() { return nullptr; }
#else
		class B* AddB();
#endif
	};
};
