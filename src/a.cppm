module;

export module test_module.a;

namespace test_module {
	class B;
};

export namespace test_module {
	class A {
	public:
#ifdef DEFINE_IN_CLASS
		B* GetB() { return nullptr; }
#else
		B* GetB();
#endif
	};
};

#ifndef DEFINE_IN_CLASS
class test_module::B* test_module::A::GetB() { return nullptr; }
#endif
