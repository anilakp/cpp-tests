#include <iostream>
#include <stdlib.h>
#include <set>

int main(int argc, char* argv[])
{
    std::set<int> data = {10,20,30,70,80,90,100,40,50,60};
    for (std::set<int>::iterator i=data.begin(); i!=data.end(); ++i)
    {
        std::cout << *i << std::endl;
    }

    std::set<int>::iterator it = prev(data.end());
    data.erase(it);

    for (std::set<int>::iterator i=data.begin(); i!=data.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
}
