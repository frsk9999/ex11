#include <iostream>
using std::cout;
using std::endl;

namespace Test {
    namespace Testen {
        void test(void){
            cout << "test" << endl;
    } }
}
namespace Test2 {
    namespace Testen {
        void test(void){
            cout << "test2" << endl;
    } }
}

int main()
{
     Test::Testen::test();
     Test2::Testen::test();
     return 0;
}
