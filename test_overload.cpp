#include <iostream>

class A{
    public:
    A(){}
    ~A(){}
    void test(void){ std::cout <<"test(void)"<<std::endl;};
    void test(int a){ std::cout <<"test(int a)"<<std::endl; };
    void test(std::string b){ std::cout <<"test(string b)"<<std::endl; };
    void test(double c){ std::cout <<"test(double c)"<<std::endl; };
};

int main()
{
    class A d;
    d.test();
    d.test(5);
    d.test("12345");
    d.test(1.0);
    return 0;
}
