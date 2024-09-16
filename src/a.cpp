module;

#include <string>
#include <memory>
#include <vector>

module test_module.channel;

import test_module.event;

#if DEFINE_IN_CLASS == 0
class test_module::B* test_module::A::AddB() { return nullptr; }
#endif
