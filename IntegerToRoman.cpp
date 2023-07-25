#include<string>
#include<vector>
#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
    
public:
    string intToRoman(int num) {
        string result;
        
        while (num > 0) {
            if (num >= 1000) {
                int remain = num / 1000;
                 
                for (int i = 0; i < remain; i++) {
                    result.push_back('M');
                    num = num - 1000;
                }
                
            } else if (num >=100 && num < 1000) {
                
                int remain = num / 100;
                if (remain == 9) {
                    result.push_back('C');
                    result.push_back('M');
                    num = num - 900;
                } else if (remain == 4) {
                    result.push_back('C');
                    result.push_back('D');
                    num = num - 400;
                } else if (remain >= 5){
                    result.push_back('D');
                    num = num - 500;
                } else {
                    for (int i = 0; i < remain; i++) {
                        result.push_back('C');
                        num = num - 100;
                    }
                }
                
            } else if (num >= 10 && num < 100) {
                int remain = num / 10;
                if (remain == 9) {
                    result.push_back('X');
                    result.push_back('C');
                    num = num - 90;
                } else if (remain == 4) {
                    result.push_back('X');
                    result.push_back('L');
                    num = num - 40;
                } else if (remain >= 5){
                    result.push_back('L');
                    num = num - 50;
                } else {
                    for (int i = 0; i < remain; i++) {
                        result.push_back('X');
                        num = num - 10;
                    }
                }
            } else if (num > 0 && num < 10) {
                int remain = num;
                if (remain == 9) {
                    result.push_back('I');
                    result.push_back('X');
                    num = num - 9;
                } else if (remain == 4) {
                    result.push_back('I');
                    result.push_back('V');
                    num = num - 4;
                } else if (remain >= 5){
                    result.push_back('V');
                    num = num - 5;
                } else {
                    for (int i = 0; i < remain; i++) {
                        result.push_back('I');
                        num = num - 1;
                    }
                }
            }
        }
        // while(s[i]!='\0') {} // string can reference like this. 

        return result;
    }
};

int main() {
    Solution s;
    cout << s.intToRoman(1) << endl;
    cout << s.intToRoman(3) << endl; //"III" 
    cout << s.intToRoman(58) << endl; // "LVIII"
    cout << s.intToRoman(1994) << endl; // "MCMXCIV"
    cout << s.intToRoman(3999) << endl; // MMMCMXCIX
    return 0; 
}