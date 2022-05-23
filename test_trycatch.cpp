#include <iostream>
using std::cout;
using std::endl;
using std::string;

void test()
{
    throw (string)"test\n";
}

int main()
{
    try {
        test();
    } catch (string str) {
        cout << str;
    }
    return 0;
}
