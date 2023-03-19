#include <iostream>

short int Divide(unsigned short int a, unsigned short int b);

int main(int argc, char* argv[])
{
    using std::cout;
    using std::cin;
    using std::endl;

    unsigned short int a, b;
    short int result = 0;
    cout << "Insert two positive short integer to be dived" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    
    result = Divide(a, b);

    if (result == -1)
    {
        cout << "The result of a / b produced an error: b was 0" << endl;
    }
    else
    {
        cout << "The result of a / b is: " << result << endl;
    }

    return 0;
}

short int Divide(unsigned short int a, unsigned short int b)
{
    if (b == 0) {
        return -1;
    }
    return a / b;
}
