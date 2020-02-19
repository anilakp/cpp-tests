#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <map>
#include <sstream>
#include <vector>
#include <math.h>

auto print_int = [](int value) {
            std::cout << value << std::endl;
};

void check_pythagorean(const std::vector<int>& values) {
    bool exists = false;
    std::vector<int>::const_iterator c = values.begin();

    while(c != values.end()) {
        for (auto a=values.begin(); a < values.end(); a++) {
            if (a != c) {
                for (auto b=values.begin(); b < values.end();b++) {
                    if (b!=a and b!=c) {
                        if (*a + *b == *c)
                            exists = true;
                    }
                }
            }
        }
        c++;
    }

    if (exists)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
}

int main() {

    int nb_test_cases = 0;
    std::cin >> nb_test_cases;
    std::map<int, std::vector<int>> input_data;

    for(int test_case_index=0; test_case_index < nb_test_cases; ++test_case_index) {
        int count=0;
        std::cin >> count;
        std::vector<int> test_values;
        std::string test_values_s;
        std::string value;
        std::getline(std::cin >> std::ws, test_values_s);
        std::stringstream ss(test_values_s);

        while(ss >> value)
        {
            test_values.push_back(pow(std::stoi(value),2));
        }

        input_data[test_case_index] = test_values;
    }

    for (int key = 0; key<input_data.size();++key) {
        std::cout << "checking ... " << std::endl;
        check_pythagorean(input_data[key]);
    }
}
