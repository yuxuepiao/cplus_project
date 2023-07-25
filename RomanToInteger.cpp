#include<string>
#include<vector>
#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
    
public:
    int romanToInt(string s) {
        int result = 0;
        unordered_map<char, int> symbols;
        symbols['I'] = 1;
        symbols['V'] = 5;
        symbols['X'] = 10;
        symbols['L'] = 50;
        symbols['C'] = 100;
        symbols['D'] = 500;
        symbols['M'] =1000;
        char previousChar = ' ';
        for (int i = s.size(); i > -1 ; i--) {
            if (previousChar == 'V' && s[i] == 'I') {
                result -= symbols[s[i]];
                continue;
            }

            if (previousChar == 'X' && s[i] == 'I') {
                result -= symbols[s[i]];
                continue;
            }

            if (previousChar == 'L' && s[i] == 'X') {
                result -= symbols[s[i]];
                continue;
            }

            if (previousChar == 'C' && s[i] == 'X') {
                result -= symbols[s[i]];
                continue;
            }

            if (previousChar == 'D' && s[i] == 'C') {
                result -= symbols[s[i]];
                continue;
            }

            if (previousChar == 'M' && s[i] == 'C') {
                result -= symbols[s[i]];
                continue;
            }

            result += symbols[s[i]];
            previousChar = s[i];

        }
        // while(s[i]!='\0') {} // string can reference like this. 

        return result;
    }
};

int main() {
    Solution s;
    cout << s.romanToInt("III") << endl; //3
    cout << s.romanToInt("LVIII") << endl; //58
    cout << s.romanToInt("MCMXCIV") << endl; //1994

    return 0; 
}