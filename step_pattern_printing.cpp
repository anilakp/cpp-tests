#include <iostream>
#include <stdlib.h>
#include <string>

void printStepPattern(const std::string& iWord, const int N)
{
    auto step = 1;
    int i = 1;
    for (const auto& character: iWord) {
        for (int index = 1; index < step; index++) {
            std::cout << "*";
        }

        std::cout << character << std::endl;
        if (step == N)
        {
            i = -1;
        } else if (step == 1) {
            i = 1;
        }

        step += i;
    }

}

int main (int argc, char* argv[])
{
    switch (argc) {
        case 0: {
            std::cout << "missing argument (string word)" << std::endl;
            return 1;
        }
        case 3 : {
            std::string word(argv[1]);
            int N = std::stoi(argv[2]);
            printStepPattern(word, N);
            break;
        }
        default: {
            std::cout << "invalid number of arguments. Please provide: word(string) number(integer)" << std::endl;
            return 2;
        }
    }

    return 0;
}
