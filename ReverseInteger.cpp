#include<string>
#include<vector>
#include<iostream>
#include<stdexcept>
#include<climits>


using namespace std;

class Solution {
public:
    int reverse(int x) {
        long result = 0;
        
        while (x != 0) {
            int remain = x % 10;
            result = result *10 + remain;
            x = x / 10;
        }

        if (result > INT_MAX) {
            return 0;
        } else if (result < INT_MIN) {
            return 0;
        }
        

        return result;
    }
};

int main() {
    Solution s;
    cout << s.reverse(123) << endl;

    cout << s.reverse(-123) << endl;

    cout << s.reverse(120) << endl;

    cout << s.reverse(1534236469) << endl;

    cout << s.reverse(-2147483648) << endl;
    return 0;
}