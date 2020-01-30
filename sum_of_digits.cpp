#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdexcept>

int calculate(const char *n, int size)
{
    std::cout << "number of digits: " << size << std::endl;

    int sum = 0;
    for (int i=0;i < size; ++i)
    {
        int digit = n[i] - 48;
        sum += digit;
    }

    return sum;
}

int main(int argc, char* argv[])
{
    switch(argc)
    {
        case 1:
        {
            std::cout << "missing arguments" << std::endl;
            return 1;
        }
        case 2:
        {
            auto number = argv[1];
            std::cout << calculate(number, std::string(number).size()) << std::endl;

            return 0;
        }
        default:
        {
            std::cout << "too many arguments, please provide 1 number" << std::endl;
            return 3;
        }
    }
}
