#include <iostream>

int main (int argc, char *argv[])
{
    using std::cout;
    using std::endl;

    unsigned short int myAge = 26;
    unsigned short int * pMyAge = &myAge;

    cout << "My age in March 2023: " << *pMyAge << endl;
    (*pMyAge)++;
    cout << "My age in September 2024: " << *pMyAge << endl;

    return 0;
}
