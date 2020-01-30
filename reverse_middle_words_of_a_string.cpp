#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <boost/algorithm/string.hpp>
#include <algorithm>

// reverse all but not first and last word in a text

// WARNING: we consider here that text can have only spaces, if it has punctuation the algorithm
// would have to be changed

int main(int argc, char* argv[])
{
    std::string text("how are you buddy?");
    std::vector<std::string> words;
    boost::split(words,text,boost::is_any_of(" "));

    std::cout << words[0] << std::endl;

    for (int index=1; index < words.size()-1; index++)
    {
        std::string word = words[index];
        std::reverse(word.begin(), word.end());
        std::cout << word << " " << std::endl;
    }

    std::cout << words[words.size()-1] << std::endl;
}
