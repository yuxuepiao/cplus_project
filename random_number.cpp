#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <random>
using namespace std;

int main() {
    // engine
    std::random_device rd{}; 
    // distributions
    auto ud = std::uniform_int_distribution<>{1,6};
    // seed
    auto mtgen = std::mt19937{ rd() };

    for (auto i = 0; i < 20; i++) {
        cout << ud(mtgen) << ' ';
    }

    cout << endl;

    return 0;
}