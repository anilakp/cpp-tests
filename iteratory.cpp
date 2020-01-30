#include <iostream>
#include <stdlib.h>
#include <set>

int main (int argc, char* argv[])
{
    std::set<int> data = {1,2,3,4,5,6};
    std::set<int>::iterator it1 = data.end();
    std::advance(it1,-2);

    std::cout << "5=" << *it1 << std::endl;

    std::set<int>::iterator it2;
    it2 = prev(data.end());

    std::cout << "6=" << *it2 << std::endl;
}
