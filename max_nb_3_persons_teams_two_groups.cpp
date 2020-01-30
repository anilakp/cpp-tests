#include <iostream>
#include <stdlib.h>

int compute(const int A1, const int B1)
{
   int total = 0;
   int min = A1;
   int max = B1;

    while (min > 0 && max > 0 && (min+max)>=3) {

        if (min>max)
        {
            min-=2;
            max-=1;
        }
        else
        {
            min-=1;
            max-=2;
        }

        total++;
    }

   return total;
}

int main(int argc, char* argv[])
{
    std::cout << compute(3,5) << std::endl;
}
