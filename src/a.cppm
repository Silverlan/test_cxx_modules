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
