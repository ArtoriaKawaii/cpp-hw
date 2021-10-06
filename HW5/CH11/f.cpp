#include"f.h"

using std::cout;

namespace A{
    void f(){
        cout << "A::f() called.\n";
    }
}
//can also code void A::f(){...}
//but cannot code:
//using namespace A;
//void f(){...}
