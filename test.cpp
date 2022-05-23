#include <iostream>
using namespace std;

class A {
    public:
    A(){ cout << "H" ; }
    ~A(){ cout << "D"  << endl; }
};
class B:A {
    public:
    B(){ cout << "E" ; }
    ~B(){ cout << "L" ; }
};
class C:B {
    public:
    C(){ cout << "L" ; }
    ~C(){ cout << "R" ; }
};
class D:C {
    public:
    D(){ cout << "L" ; }
    ~D(){ cout << "O" ; }
};
class E:D {
    public:
    E(){ cout << "O" ; }
    ~E(){ cout << "W" ; }
};

int main()
{
    class E e;
    std::cout << " ";
    return 0;
}
