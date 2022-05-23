#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int *i = new int;
    *i=3;
    cout << *i << endl;
    delete i;
    return 0;
}
