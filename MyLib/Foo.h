//---------------------------------------------------------------------------
#ifndef FooH
#define FooH
//---------------------------------------------------------------------------

#include "MyLib.h"

#include <set>

class __declspec(package) Foo
{
public:
    Foo();
    ~Foo();

private:
    std::set<int> bar;
};

#endif