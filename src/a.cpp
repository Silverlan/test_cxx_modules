module;

module test_module.a;

import test_module.b;

#ifndef DEFINE_IN_CLASS
class test_module::B* test_module::A::GetB() { return nullptr; }
#endif
