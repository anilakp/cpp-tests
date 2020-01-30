#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdexcept>

int calculate(const int n1, const int n2)
{
    if (n1 == n2)
        if (n1 == 0)
            throw std::runtime_error(std::string("nigdy cholero nie dziel przez zero"));
        else
            return n1;

    if (n1 == 0)
        return n2;

    if (n2 == 0)
        return n1;

    if (n1 > n2)
        return calculate(n1-n2, n2);

    return calculate(n1, n2-n1);
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
            std::cout << "missing one more argument" << std::endl;
            return 2;
        }
        case 3:
        {
            try {
                std::cout << calculate(std::stoi(argv[1]), std::stoi(argv[2])) << std::endl;
            }
            catch (std::runtime_error& e)
            {
                std::cout << e.what() << std::endl;
                return 4;
            }

            return 0;
        }
        default:
        {
            std::cout << "too many arguments, please provide 2 numbers" << std::endl;
            return 3;
        }
    }
}
