module;

export module test_module.parent;

namespace test_module {
    struct Child;
};

export namespace test_module {
	struct Parent {
		Child *child;
	};
};

