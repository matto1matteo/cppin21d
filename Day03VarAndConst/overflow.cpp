#include <iostream>

/// Overflow examples
int main (int argc, char *argv[])
{
    unsigned short int small_int = 65535;
    std::cout << "Smol int: " << small_int << std::endl;
    small_int++;
    std::cout << "Smol int (++): " << small_int << std::endl;

    short int s_small_int = 32767;
    std::cout << "Smol int: " << s_small_int << std::endl;
    s_small_int++;
    std::cout << "Smol int (++): " << s_small_int << std::endl;
    
    return 0;
}
