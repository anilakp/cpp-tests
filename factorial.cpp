#include <iostream>

int factorial(const int n)
{
    if (n == 1)
        return n;

    return n * factorial(n-1);
}

int main()
{
    int n = 6;
    std::cout << factorial(n) << std::endl;
}
