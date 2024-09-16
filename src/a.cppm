module;

export module test_module.channel;

export namespace test_module {
	class A {
	public:
		virtual ~A() = default;

#ifdef DEFINE_IN_CLASS
		class B* AddB() { return nullptr; }
#else
		class B* AddB();
#endif
	};
};
