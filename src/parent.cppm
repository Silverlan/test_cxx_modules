module;

#include <vector>

export module test_module.parent;

import test_module.child;

export namespace test_module {
	struct Parent {
		std::vector<Child> m_children;
	};
};

