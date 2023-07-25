#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

class Solution {
public:

    int minKnightMoves(int x, int y) {
        // Symmetry for axes
        x = abs(x);
        y = abs(y);
        // Symmetry for diagonal
        if (x < y) {
            int temp = x;
            x = y;
            y = temp;
        }
        if (x == 1 && y == 0) {
            return 3;
        }
        if (x == 2 && y == 2) {
            return 4;
        }
        int delta = x - y;
        if (y > delta) {
            return (int) (delta - 2 * floor((float) (delta - y) / 3));
        } else {
            return (int) (delta - 2 * floor((delta - y) / 4));
        }
    }
};

// change direction a*=-1


int main() {
    Solution s;

    cout << s.minKnightMoves(5, 5) << endl; // 4

    cout << s.minKnightMoves(2, 1) << endl; // 1
    cout << s.minKnightMoves(0, 1) << endl; // 3
    return 0;
}