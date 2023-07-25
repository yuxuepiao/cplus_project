#include<string>
#include<vector>
#include<iostream>
#include<numeric>
using namespace std;

class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> result;
        // std::string str = std::to_string(num);

        //result.push_back(to_string(1) + "/" + to_string(n));
        for (int i = n ; i > 0; i--) {
            for (int j = i - 1; j > 0; j--) {
                if (gcd(i, j) == 1) {
                    string each = to_string(j) + "/" + to_string(i);
                    result.push_back(each);
                }
            }
        }

        return result;
    }

    

};

void printVector(vector<string> results) {
    for (auto i : results) {
        cout << i << ' ';
    }

    cout << endl;

}

int main() {
    Solution s;
    vector<string> result1 = s.simplifiedFractions(2);
    vector<string> result2 = s.simplifiedFractions(3);
    vector<string> result3 = s.simplifiedFractions(4);
    printVector(result1);
    printVector(result2);
    printVector(result3);
    return 0;
}