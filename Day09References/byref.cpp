#include <iostream>

void FunRef(int & a, int & b);

void Fun(int a, int b);

int main (int argc, char *argv[])
{
    using std::cout;
    using std::endl;

    int a = 10;
    int b = 20;

    int & rA = a;
    int & rB = b;

    Fun(a, b);
    Fun(rA, rB);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "rA: " << rA << endl;
    cout << "rB: " << rB << endl;

    FunRef(a, b);
    //FunRef(rA, rB);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "rA: " << rA << endl;
    cout << "rB: " << rB << endl;
    return 0;
}

/// Changing value of these vars here won't change their value outside this
/// function scope, even if we pass those values from "references"
void Fun(int a, int b)
{
    using std::cout;
    using std::endl;
    a = 2;
    b = 3;
    cout << endl;
    cout << "Inside Fun a: " << a << endl;
    cout << "Inside Fun b: " << b << endl;
}

/// On the other side, this function will change the value of the refenced data
/// even outside this function scope, and it doesn't matter if we pass in a ref
/// or a "proper" value
void FunRef(int & a, int & b)
{
    using std::cout;
    using std::endl;
    a = 2;
    b = 3;
    cout << endl;
    cout << "Inside Fun a: " << a << endl;
    cout << "Inside Fun b: " << b << endl;
}

