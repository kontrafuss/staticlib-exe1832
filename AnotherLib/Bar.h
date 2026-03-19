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
    // FIXME: remove the following line
    std::set<int> numbers;
};

#endif
