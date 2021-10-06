#include"f.h"
#include"g.h"

using A::f;//not using A::f()
using A::g;//not using A::g()

int main(){
    f();
    g();
}