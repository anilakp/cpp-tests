#include <stdlib.h>
#include <iostream>
#include <cstdint>

int32_t findPivotingIndex(const uint32_t *iArray,
    const int iSize, const int iMin, const int iMax)
{
    uint32_t pivotingIndex = (iMin+iMax)/2;

    if ((iMax-iMin) == 1)
    {
        if (iArray[pivotingIndex] > iArray[iMax])
            return pivotingIndex;
        else
            return -1;
    }

    std::cout << "min=" << iMin << ", max=" << iMax << ", pivot=" << pivotingIndex << std::endl;

    if ((iArray[pivotingIndex-1] > iArray[pivotingIndex]))
    {
        return pivotingIndex-1;
    }
    else
    {
        findPivotingIndex(iArray, iSize, pivotingIndex, iMax);
    }
}

uint32_t searchValueIndex(const uint32_t iValue,
    const uint32_t *iArray, const int min, const int max)
{
    int mid = (min+max)/2;

    if (iArray[mid] == iValue)
        return mid;

    if (iArray[mid] > iValue)
    {
       return searchValueIndex(iValue, iArray, min, mid-1);
    }
    else
    {
       return searchValueIndex(iValue, iArray, mid+1, max);
    }
}

int main()
{
    uint32_t iArray[] = {2,1};
    uint32_t size = sizeof(iArray)/sizeof(iArray[0]);
    std::cout << "size=" << size << std::endl;

    if (size == 1)
    {
        std::cout << "provided table is not rotated" << std::endl;
        return 1;
    }

    auto pivotingIndex = findPivotingIndex(iArray, size, 0, size-1);
    std::cout << "pivot index=" << pivotingIndex << std::endl;

    if (pivotingIndex == -1)
    {
        std::cout << "provided table is not rotated" << std::endl;
        return 1;
    }

    int key = 1;

    if (iArray[pivotingIndex] == key)
    {
        return pivotingIndex;
    }

    if (key > iArray[pivotingIndex])
    {
        // should never happen, invalid key provided not in range
        std::cout << "provided key does not fit into data range" << std::endl;
        return 2;
    }

    int index = 0;
    if (key >= iArray[0] && key < iArray[pivotingIndex])
    {   // we search on the left side of pivot index
        index = searchValueIndex(key, iArray, 0, pivotingIndex-1);
    }
    else
    {
        // we search on the right side of pivot index
        index = searchValueIndex(key, iArray, pivotingIndex+1, size-1);
    }

    std::cout << "index is = " << index << std::endl;

    return 0;
}
