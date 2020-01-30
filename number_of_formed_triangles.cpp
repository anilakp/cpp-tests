#include <iostream>

int count(const int n)
{
    if (n > 4)
        return n* (n-4);

    return 0;
}

int main()
{
    const int n(5);
    std::cout << count(n) << std::endl;
}
