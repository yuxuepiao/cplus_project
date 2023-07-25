#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> records;
        std::vector<int> results;
        std::unordered_map<int,int>::const_iterator temp;
        
        for (int i = 0 ; i < nums.size(); i++) {
            temp = records.find(target - nums[i]);
            if (temp == records.end()) {
                records.emplace(nums[i],i);
            } else {
                results.push_back(temp->second);
                results.push_back(i);
                return results;
            }
        }
        
        return results;
        
    }
};

void printVector(vector<int> results) {
    for (auto i : results) {
        cout << i << ' ';
    }

    cout << endl;

}

int main() {
    Solution solution;
    vector<int> inputs = {2,7,11,15};
    int target = 9;
    auto result = solution.twoSum(inputs, target);
    printVector(result);
}