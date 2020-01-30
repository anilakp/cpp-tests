#include <stddef.h>
#include <iostream>
#include <cstdint>

uint32_t findMissingNumber(uint32_t *iNumbers, const uint32_t size)
{
    uint32_t sum = (size+1)*(size + 2)/2;
    std::cout << "sum: " << sum << ", size=" << size << std::endl;
    for (uint32_t i = 0; i<size; ++i)
    {
        sum -= iNumbers[i];
        std::cout << "--" << sum << "--" << std::endl;
    }

    return sum;
}

int main()
{
    uint32_t numbers[] = {1,2,3,4,6,7,8};
    uint32_t size = sizeof(numbers)/sizeof(numbers[0]);
    uint32_t missingNumber = findMissingNumber(numbers, size);
    std::cout << missingNumber << std::endl;
    return 0;
}
