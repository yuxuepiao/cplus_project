#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;

        for (int i = low; i<= high; i++) {
            if (i % 2 == 1) {
                count++;
            }
        }


        return count;
    }

    int countOdds2(int low, int high) {
        int result = (high - low) / 2;
        if(high % 2 == 1 && low % 2 == 1)
            return ++result;
        
        return result += (high % 2 == 1) + (low % 2 == 1);
    }
};