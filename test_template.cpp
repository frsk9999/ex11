#include <iostream>
using std::cout;
using std::endl;

template <class T>
T test(T a){
    return a;
}

int main()
{
    int i=4,ret=0;
    double j=0.123,dret=0.0;
    ret = test(i);
    dret = test(j);
    cout << "ret="<< ret << endl;
    cout << "dret="<< dret << endl;
    return 0;
}
