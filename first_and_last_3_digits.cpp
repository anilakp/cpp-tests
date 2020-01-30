#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

void convertToBinary(const int N)
{
    int bv[64] = {0};
    int value = N, rest = 0;
    int size=0;
    for (size=0; value > 0; size++) {
        bv[size] = value % 2;
        value = value / 2;
        std::cout << bv[size] << std::endl;
    }

    size = (size < 3) ? 3: size;

    int first = 0, p=0;
    for (int i=size-3;i<size;i++) {
        first = first + bv[i] * pow(2,p++);
    }

    int last = 0;

    p=0;
    for (int i=0;i<3;i++) {
        last = last + bv[i] * pow(2,p++);
    }

    std::cout << first << " " << last << std::endl;
}

int main(int argc, char* argv[])
{
    convertToBinary(5);
    return 0;
}
