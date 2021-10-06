#include"g.h"

using std::cout;

namespace A{
    void g(){
        cout << "A::g() called.\n";
    }
}
//can also code void A::g(){...}
//but cannot code:
//using namespace A;
//void g(){...}