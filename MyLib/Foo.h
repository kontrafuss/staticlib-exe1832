//---------------------------------------------------------------------------
#ifndef FooH
#define FooH
//---------------------------------------------------------------------------

#include "MyLib.h"
#include "Bar.h"

class __declspec(package) Foo : public Bar
{
public:
    Foo();
    ~Foo() override;
};

#endif