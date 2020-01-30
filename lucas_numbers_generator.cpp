#include <iostream>
#include <stdlib.h>

void printLucasNumbers(const int N)
{
    int value_1 = 1;
    int value_2 = 2;

    std::cout << value_2 << "," << value_1;

    for (int i=2;i<N;i++)
    {
        int sum = value_1 + value_2;
        std::cout << "," << sum;
        value_2 = value_1;
        value_1 = sum;
    }
}

int main (int argc, char* argv[])
{
    int N=12;
    if (N>1) {
        printLucasNumbers(N);
    } else {
        std::cout << "N <= 1" << std::endl;
    }
}
