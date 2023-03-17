#include <iostream>

enum Classic {
    A, B, C
};

enum class ClassEnum : unsigned short int
{
    A, B, C
};

int main (int argc, char *argv[])
{
    unsigned short int i = 0;

    Classic c = Classic::C;
    if (i != c) std::cout << "No proper type checking here my friendo!" << std::endl;

    // you can cast, but not call the operator directly
    // if (i == ClassEnum::A) std::cout << "something bad is happening here" << std::endl;
    if (i == (unsigned short int)ClassEnum::A) std::cout << "You must cast it my dear" << std::endl;
    
    return 0;
}
