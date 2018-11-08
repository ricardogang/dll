#ifndef DLL0_H
#define DLL0_H

#if defined(DLL0_LIBRARY)
#  define DLL0 __declspec(dllexport)
#else
#  define DLL0 __declspec(dllimport)
#endif

class DLL0 Dll0
{

public:
    int Add(int x, int y){ return x+y;}
    float  Add(float x, float y) {return x+y ;}
    Dll0();
};

#endif // DLL0_H
