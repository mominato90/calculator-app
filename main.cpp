#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}
// Test comment to check if the code is working fine
int main()
{
    std::cout << "Place of Birth" << std::endl;
    std::cout << "Nationality" << std::endl;
    std::cout << "Country: Morocco" << std::endl;

    std::cout << "Calculator App" << std::endl;
    std::cout << "2 + 3 = " << add(2, 3) << std::endl;
    std::cout << "5 - 2 = " << subtract(5, 2) << std::endl;

    return 0;
}