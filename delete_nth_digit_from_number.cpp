#include <iostream>
#include <stdlib.h>

void deleteNthDigit(const int number, const int N)
{
    std::string snum = std::to_string(number);
    std::cout << snum << std::endl;

    std::string first;
    std::string last;

    for (int i=0; i<snum.size(); ++i)
    {
        if (i+1 != N)  {
            first.push_back(snum[i]);
        }

        if (i+1 != (snum.size() - N + 1))
        {
            last.push_back(snum[i]);
        }
    }

    std::cout << first << std::endl;
    std::cout << last << std::endl;
}

int main(int argc, char* argv[])
{
    deleteNthDigit(4516312,2);
}
