#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <set>
using namespace std;

class Solution {
public:
    // not completed
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> results;
        vector<vector<int>> output;

        unordered_map<int, int> records;

        for (int i =0; i < nums.size() ;i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                auto temp = records.find(-nums[i] - nums[j]);

                if (temp == records.end()) {
                    records.emplace(nums[j], j);
                } else {
                    vector<int> eachResult;
                    eachResult.push_back(temp->first);
                    eachResult.push_back(nums[j]);
                    eachResult.push_back(nums[i]);
                    results.insert(eachResult);
                    
                }
            }
        }


        for (auto each : results) {
            output.push_back(each);
        }
        return output;
    }
};

void printVector(vector<vector<int>>& results) {
    for (auto eachVec : results) {
        for (auto e : eachVec) {
            cout << e << ' ';
        }
        cout << endl;
        
    }

    cout << endl;

}

int main() {
    Solution solution;
    vector<int> inputs = {-1,0,1,2,-1,-4};
    auto results = solution.threeSum(inputs);
    printVector(results);

}