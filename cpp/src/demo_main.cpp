#include "add_demo.h"
#include <iostream>

int main(int argc, char* argv[])
{
    int a = 1;
    int b = 2;
    int result = add(a,b);
    std::cout << a << " + " << b <<  " = " << result << std::endl;

}
