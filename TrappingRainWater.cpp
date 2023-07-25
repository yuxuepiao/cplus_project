#include<string>
#include<vector>
#include<iostream>
#include<numeric>
using namespace std;

class Solution {
public:
    int trap_wrong(vector<int>& height) {

        int result =0;
        int firstBlock = 0;
        int secondBlock = 0;
        for (int i = 0; i < height.size(); i++ ) {
            if (firstBlock == 0 ) {
                firstBlock = height[i];
                continue;
            }

            if (firstBlock <= height[i]) {
                firstBlock = height[i];
                continue;
            }

            if (firstBlock > height[i]) {
                result = result + (firstBlock - height[i]);
            }
        }

        return result;
        
    }

    int trap(vector<int>& height) {
        int n = height.size();
        int lmax = height[0];
        int rmax = height[n-1];
        int lpos = 1;
        int rpos = n-2;
        int water = 0;
        while(lpos <= rpos)
        {
            if(height[lpos] >= lmax)
            {
                lmax = height[lpos];
                lpos++;
            }
            else if(height[rpos] >= rmax)
            {
                rmax = height[rpos];
                rpos--;
            }
            else if(lmax <= rmax && height[lpos] < lmax)
            {
                water += lmax - height[lpos];
                lpos++;
            }
            else
            {
                water += rmax - height[rpos];
                rpos--;
            }
        
        }
        return water;
    }
};

int main() {

    Solution s;
    vector<int> input1 = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << s.trap(input1) << endl; // 6

    return 0;
}