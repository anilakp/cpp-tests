#include <bits/stdc++.h>

// print Nth ugly number. Ugly number is the number which prime factors are only 2,3 and 5.

int main() {

    std::set<long> ugly_numbers;
    int n = 0;
    int number = 0;
    std::cin >> n;

    if (n==1) {
        std::cout << n << std::endl;
    }
    else {
        ++number;
        ugly_numbers.insert(number);
        int counter = 1;
        while (counter != n) {
            if ((number%2 == 0) && ((number/2==1) || (((number/2)%2 == 0)|| ((number/2)%3 ==0) || ((number/2)%5 == 0)))) {
                ugly_numbers.insert(number);
                ++counter;
            }
            else if ((number%3 == 0) && ((number/3==1) || (((number/3)%2 == 0)|| ((number/3)%3 ==0) || ((number/3)%5 == 0)))) {
                ugly_numbers.insert(number);
                ++counter;
            }
            else if ((number%5 == 0) && ((number/5==1) || (((number/5)%2 == 0)|| ((number/5)%3 ==0) || ((number/5)%5 == 0)))) {
                ugly_numbers.insert(number);
                ++counter;
            }
            ++number;
        }
    }

    long index=1;

    for(const auto value: ugly_numbers) {
        if (index == n) {
            std::cout << value << std::endl;
            break;
        }
        ++index;
    }
}
