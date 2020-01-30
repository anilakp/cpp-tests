#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <set>

int main (int argc, char* argv[])
{
    int K=4;
    std::vector<int> H = {3, 5, 1, 2, 3};
    std::vector<int> C = {1, 4, 3, 4, 3};

    // ktore kolory budynkow beda widoczne w zaleznosci od punktu obrotu wskazanego przez K
    //auto max = std::max_element(H.begin(), H.end());

    // lista indexow pod ktorymi bedziemy szukac unique kolorow
    std::vector<int> indexes;
    indexes.push_back(K-1);

    int base = H[K-1];

    for (int i=K-2; i>=0; --i) {
        if (H[i] > base) {
            indexes.push_back(i);
            base = H[i];
        }
    }

    std::set<int> colorsCount;

    for (const auto& idx: indexes) {
        colorsCount.insert(C[idx]);
    }

    std::cout << colorsCount.size() << std::endl;
}
