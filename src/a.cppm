module;

export module test_module.channel;

export namespace test_module {
	class A {
	public:
		virtual ~A() = default;

		class B* AddB() { return nullptr; }
	};
};
