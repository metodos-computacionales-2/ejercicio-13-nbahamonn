#include <iostream>
int subtraction(int a, int b)
{
    int r;
    r=a-b;
    return r;
}

int main(void)
{
    int x=5,y=3,z;
    z=subtraction(7,2);
    std::cout<< "The first result is " <<&z<<"\n";
    z = subtraction(7,2);
    std::cout<< "The second result is " <<&z<<"\n";
    z = subtraction(x,y);
    std::cout<< "The third result is " <<&z<<"\n";
    z=4+subtraction(x,y);
    std::cout<< "The fourth result is " <<&z<<"\n";
    return 0;
}
