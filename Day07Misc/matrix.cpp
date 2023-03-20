#include <iostream>

int main (int argc, char *argv[])
{
    using std::cout;
    using std::endl;

    // 10x10 matrix of '0'
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j < 9) cout << "0 ";
            else cout << "0" << endl;
        }
    }

    // count from 100 to 200 with a step of 2
    // for (int i = 100; i <= 200; i += 2) {
    //     cout << "Counting... " << i << endl;
    // }

    int i = 100;
    // while (i <= 200)
    // {
    //     cout << "Counting... " << i << endl;
    //     i += 2;
    // }
    do
    {
        cout << "Counting... " << i << endl;
        i += 2;
    }
    while (i <= 200);

    return 0;
}
