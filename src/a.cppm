module;

export module test_module.a;

export namespace test_module {
	class A {
	public:
		virtual ~A() = default;

#ifdef DEFINE_IN_CLASS
		class B* GetB() { return nullptr; }
#else
		class B* GetB();
#endif
	};
};
