#include <iostream>

int ToThePower(int base, int exponent);

int main (int argc, char *argv[])
{
    using std::cout;
    using std::cin;
    using std::endl;

    int base, exponent, result;

    cout << "Give me the base!!";
    cin >> base;
    cout << "Now give me the exponent!!!";
    cin >> exponent;

    result = ToThePower(base, exponent);

    cout << base << " to the power of " << exponent << " give me " << result << endl;
    
    return 0;
}

int ToThePower(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    return base * ToThePower(base, --exponent);
}
