#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:

    string convert(string s, int numRows) {

        if(numRows <= 1) return s;

        vector<string>v(numRows, ""); 

        int j = 0, dir = -1;

        for(int i = 0; i < s.length(); i++)
        {

            if(j == numRows - 1 || j == 0) {
                dir *= (-1); 
            }
                
            v[j] += s[i];

            if(dir == 1) {
                j++;
            } else { 
                j--;
            }
        }

        string res;

        for(auto &it : v) res += it; 

        return res;

    }
};

int main() {
    Solution s;
    cout << s.convert("PAYPALISHIRING", 3) << endl;
    // result = "PAHNAPLSIIGYIR"

    cout << s.convert("PAYPALISHIRING", 5) << endl;
    // PHASIYIRPLIGAN

}