#include <iostream>

int main (int argc, char *argv[])
{
    using std::cout;
    using std::endl;

    int varOne = 10;
    const int * const pVarOne = &varOne;

    cout << "varOne: " << varOne << endl;
    cout << "&varOne: " << &varOne << endl;
    cout << "pVarOne: " << pVarOne << endl;
    cout << "*pVarOne: " << *pVarOne << endl;

    varOne = 6;

    cout << "varOne: " << varOne << endl;
    cout << "&varOne: " << &varOne << endl;
    cout << "pVarOne: " << pVarOne << endl;
    cout << "*pVarOne: " << *pVarOne << endl;

    // this will issue a compiler error, sinces pVarOne is a const int pointer
    // *pVarOne = 10; // read only location
    int varTwo = 4;


    // this will issue a compiler error, sinces pVarOne is a pointer const
    // pVarOne = &varTwo; // read only variable
    
    return 0;
}
