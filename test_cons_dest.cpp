#include <iostream>
using std::string;

class A {
    string *p;
public:
    A(){
        p = new string; 
    }
    ~A(){
        delete p;
    }
    string getp(){
        return *p;
    }
    void setp(string a){
        *p=a;
    }
};

int main()
{
    class A b;
    b.setp("test");
    std::cout << b.getp();
    std::cout << std::endl;
    return 0;
}
