#include <iostream>
using std::cout;
using std::endl;

class A {
    public:
    A(){ cout << "H" ; }
    ~A(){ cout << "D"  << endl; }
};
class B {
    public:
    B(){ cout << "E" ; }
    ~B(){ cout << "L" ; }
};
class C {
    public:
    C(){ cout << "L" ; }
    ~C(){ cout << "R" ; }
};
class D {
    public:
    D(){ cout << "L" ; }
    ~D(){ cout << "O" ; }
};
class E:A,B,C,D {
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
