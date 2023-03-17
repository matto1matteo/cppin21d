#include <iostream>

int main (int argc, char *argv[])
{
    int a = 10;
    int b = 15;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << "magic happening!" << std::endl;
    if (a <= b)
    {
        b = a;
    }
    else 
    {
        a = b;
    }

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    return 0;
}
