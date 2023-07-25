#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> records;
        int result = 0;

        records.push(0);
        records.push(0);

        for (auto e : stones) {
            records.push(e);
        }

        

        while (!records.empty()) {
            int s1 = records.top();
            records.pop();
            int s2 = records.top();
            records.pop();

            if (s1 == 0 && s2 != 0 ) {
                return s2;
            }

            if (s1 != 0 && s2 == 0 ) {
                return s1;
            }

            if (s1 == 0 && s2 == 0 ) {
                return 0;
            }

            if (s1 == s2) {
                records.push(0);
                records.push(0);
            } else {
                records.push(0);
                records.push(abs(s1-s2));
            }
        }


        return result;
    }
};

int main() {
    Solution solution;
    vector<int> v1 = {2,7,4,1,8,1};
    vector<int> v2 = {1};
    cout << solution.lastStoneWeight(v1) << endl;
    cout << solution.lastStoneWeight(v2) << endl;
    return 0;
}