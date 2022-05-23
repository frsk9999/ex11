#include <iostream>
using std::cout;
using std::endl;

class A{
public:
    A(){}
    ~A(){}
    virtual void test(int i){ cout <<"i?"<<i<<endl; }
};
class B : A{
public:
    B(){}
    ~B(){}
    void test(int i){ cout << "i="<<i << endl; }
};

int main(){
    class B c;
    c.test(4);
    return 0;
}
