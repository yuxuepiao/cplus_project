#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

int main () {
    auto si = std::to_string(42);
    auto sl = std::to_string(42L);
    auto sd = std::to_wstring(42.0);

    // convert from string to integer

    auto i1 = std::stoi("42");
    auto i2 = std::stoi("101010", nullptr, 2);

    auto d1 = std::stod("123.45");

    try {
        auto i16 = std::stoi("");
    } catch (std::exception const & e) {
        cout << e.what() << endl;
    }

    return 0;
}