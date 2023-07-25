#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> result;
        for (auto e : nums) {
            if (e != val) {
                result.push_back(e);
            }
        }

        nums = result; // this is ugly.

        return result.size();    
    }
};


int main() {
    Solution s;
    return 0;
}