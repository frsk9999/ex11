#include <iostream>

using std::cout;
using std::endl;

class Test {
    friend class Test2;
    int test=0; //private
public:
    Test(){ cout <<"Test::Test" << endl; }
    ~Test(){ cout <<"Test::~Test" << endl; }
    int test2;
    friend void set_test(int i);
    friend int get_test(void);
protected:
    int test3=9;
};

class Test2: Test {
public:
    Test2(){ cout <<"Test2::Test2" << endl; }
    ~Test2(){ cout <<"Test2::~Test2" << endl; }
    void set_test(int i){ test=i; }
    int get_test(void){ return test;}
    void set_test3(int i){ test3=i; }
    int get_test3(void){ return test3;}
};

int main()
{
    Test2 test2;
    test2.set_test(3);
    test2.set_test3(4);
    cout << "test2.get_test:" << test2.get_test(); 
    cout << endl;
    cout << "test2.get_test3:" << test2.get_test3(); 
    cout << endl;
}
