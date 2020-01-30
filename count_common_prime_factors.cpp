#include <iostream>
#include <cstdint>
#include <map>
#include <bits/stdc++.h>


int findGCD(const int n1, const int n2)
{
    if (n1 == 0 && n2 != 0)
        return n2;

    if (n2 == 0 && n1 != 0)
        return n1;

    if (n1 == n2)
        return n1;

    if (n1 > n2)
        return findGCD(n1-n2,n2);

    return findGCD(n1,n2-n1);
}

int countPrimeFactors(int iNumber)
{
    int res = 0;
    int i = 2;



    while (iNumber % i == 0)
    {
        iNumber = iNumber/2;
        res++;
    }

    for (i = 3; i < sqrt(iNumber); i=i+2)
    {
        while (iNumber % i == 0)
        {
            iNumber = iNumber/3;
            res++;
        }
    }

    return res;
}

int main()
{
    auto gcd = findGCD(12,24);
    std::cout << gcd << std::endl;
    std::cout << countPrimeFactors(gcd);

    return 0;
}
