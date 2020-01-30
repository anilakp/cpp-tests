#include <iostream>
#include <stdlib.h>

void solution1(const int A, const int B)
{
    int divisor = 1;
    bool flag = true;
    int biggest = divisor;
    int min = A;
    int max = B;

    while(divisor <= max)
    {
        flag = true;

        for (int i=min;i<=max;i++) {
            int div = i / (divisor);
            int mod = i % (divisor);

            if ((div > 0) && (mod == 0)) {
                continue;
            } else {
                flag = false;
                break;
            }
        }

        if (flag)
            biggest = divisor;

        divisor++;
    }

    std::cout << biggest << std::endl;
}

void solution2(const int A, const int B)
{
    if (A==B)
        std::cout << A << std::endl;
    else
        std::cout << 1 << std::endl;
}

int main(int argc, char* argv[])
{
    int A=24, B=24;

    solution1(A, B);
    solution2(A, B);
}
