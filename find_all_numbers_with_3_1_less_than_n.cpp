#include <string>
#include <iostream>

void check(const int x)
{
    bool failed = false;

    const std::string x_str = std::to_string(x);

    for(int i=0;i<x_str.size();i++)
    {
        if (x_str[i] != '1' and x_str[i] != '3')
        {
            failed = true;
            break;
        }
    }

    if (!failed)
    {
        std::cout << x << std::endl;
    }
}

int main(int argc, char *argv[])
{
    int x=std::stoi(std::string(argv[1]));

    for(int i=0;i<x;++i)
    {
        check(i);
    }

    return 0;
}
