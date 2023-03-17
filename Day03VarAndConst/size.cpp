#include <iostream>

int main (int argc, char *argv[])
{
    using std::cout;
    using std::endl;

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of short: " << sizeof(short int) << endl;
    cout << "Size of long: " << sizeof(long int) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of bool: " << sizeof(bool) << endl;
    return 0;
}
