#include <iostream>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    for (int i=1; i<=100; ++i)
    {
        std::string out;

        if (i%3 == 0)
        {
            out += "Fizz";
        }

        if (i%5 == 0)
        {
            out += "Buzz";
        }

        if (!out.empty())
            std::cout << out;
    }
}
