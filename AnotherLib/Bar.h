//---------------------------------------------------------------------------
#ifndef BarH
#define BarH
//---------------------------------------------------------------------------

#include <set>

// non-package base class
class Bar
{
public:
    Bar() = default;
    virtual ~Bar() = default;

private:
    std::set<int> numbers;
};

#endif
