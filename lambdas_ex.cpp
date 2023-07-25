#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <random>

using namespace std;

int main() {
    auto numbers = vector<int>{0, 2, -3, 5, -1, 6, 8, -4, 9};
    auto positives = std::count_if(
        std::begin(numbers), std::end(numbers), 
        [](int const n) {return n > 0;}
    );
    /*
    for (auto i : positives) {
        cout << i << ' ';
    }
    */
    return 0;
}