#include <iostream>

typedef unsigned short int usint;
typedef unsigned long int ulint;

ulint Perimeter(usint length, usint width);

int main (int argc, char *argv[])
{
    
    std::cout << "Rect(2,3) Perimeter: " << Perimeter(2, 3) << std::endl;
    return 0;
}

ulint Perimeter(usint length, usint width)
{
    return (ulint)(length + width)*2;
}
