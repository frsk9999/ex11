#include <iostream>
using std::cout;
using std::endl;

class A {
protected:
    int hogehoge;
public:
    virtual int get_hogehoge( void ) = 0;
    virtual void set_hogehoge( int i ) = 0;
};
class B: A {
public:
    int get_hogehoge(void){ return hogehoge; }
    void set_hogehoge(int i){ hogehoge=i; }
};
class C: A {
public:
    int get_hogehoge(void){ cout << "hogehoge:" << hogehoge << endl; return 0; }
    void set_hogehoge(int i){ cout << "input:" << i << endl; }
};

int main()
{
    class B b;
    class C c;
    b.set_hogehoge(4);
    c.set_hogehoge(9);
    cout << b.get_hogehoge(); cout <<endl;
    cout << c.get_hogehoge(); cout <<endl;
    return 0;    
}
