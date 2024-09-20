module;

export module test_module.child;

namespace test_module {
    struct Parent;
};

export namespace test_module {
	struct Child {
		Parent *get_parent();
	};
};
