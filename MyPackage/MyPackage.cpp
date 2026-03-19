//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Package source.
//---------------------------------------------------------------------------

#if defined(__BORLANDC__) && defined(_WIN64) && defined(__MINGW64__)
// BCC64X
#pragma link "MyLib.lib"
#pragma link "AnotherLib.lib"
#elif defined(__BORLANDC__) && defined(__clang__) && defined(_WIN64)
// BCC64
#pragma link "MyLib.a"
#pragma link "AnotherLib.a"
#else
#error Unsupported platform
#endif


#include "Foo.h"

#pragma argsused
extern "C" int _libmain(unsigned long reason)
{
	return 1;
}
//---------------------------------------------------------------------------

void useFoo()
{
    Foo foo;
}