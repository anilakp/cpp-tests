#include <iostream>
#include <stdlib.h>
#include <vector>

void solution1(const int A, const int B)
{
    int divisor = 1;
    bool flag = true;
    std::vector<int> dividors;
    int min = (A>B) ? B: A;

    std::cout << "min=" << min << std::endl;

    while(divisor <= min)
    {
        int divA = A / (divisor);
        int modA = A % (divisor);

        std::cout << "divA=" << divA << "," << "modA=" << modA << std::endl;

        if ((divA > 0) && (modA == 0)) {
            int divB = B / (divisor);
            int modB = B % (divisor);

            std::cout << "divB=" << divB << "," << "modB=" << modB << std::endl;

           if ((divB > 0) && (modB == 0)) {
               std::cout << "divisor=" << divisor << " : ";
               std::cout << (A/divisor) << "," << (B/divisor) << std::endl;
           }
        }

        divisor++;
    }
}

int main(int argc, char* argv[])
{
    int A=10, B=15;

    solution1(A, B);
}
