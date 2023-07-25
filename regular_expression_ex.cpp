#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <random>
#include <regex>
using namespace std;
using namespace std::string_literals;

int main() {
    // validate for email address.
    auto pattern {R"(^[A-Z0-9._%+-]+@[A-Z0-9.-]+\.[A-Z]{2,}$)"s};

    //auto rx = std::regex{pattern};
    auto rx = std::regex{pattern, std::regex_constants::icase};
    auto valid = std::regex_match("marius@domain.com"s, rx);

    cout << valid << endl;

    auto text{"abc aa bca ca bbbb"s};
    auto rx1 = std::regex{ R"(\b[a|b|c]{3}\b)"s };
    auto newtext = std::regex_replace(text, rx1, "---"s);

    cout << newtext << endl;

    auto text1{ "bancila, marius"s };
    auto rx2 = std::regex{ R"((\w+),\s*(\w+))"s };
    auto newtext1 = std::regex_replace(text1, rx2, "$2 $1"s);
    cout << newtext1 << endl;
    return 0;
}