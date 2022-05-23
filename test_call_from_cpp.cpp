#include <iostream>

extern "C" int test();

int main(){
    test();
    std::cout<<"main"<<std::endl;
    return 0;
}
