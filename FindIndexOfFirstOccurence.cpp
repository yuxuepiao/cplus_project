#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int strStr1(string haystack, string needle) {
        int j = 0;
        
        for (int i =0; i < haystack.size();) {
            if (haystack[i++] == needle[j++]) {
                if (j >= needle.size()) {
                    return i - needle.size();
                }
            } else {
                if (j != 1) {
                    i = i - (needle.size() - j + 2);
                } 
                j = 0;
                
                
            }

            
        }

        return -1;
    }
    // break always breaks the innermost loop.
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();

        for (int windowStart = 0; windowStart <= n - m; windowStart++) {
            for (int i = 0; i < m; i++) {
                if (needle[i] != haystack[windowStart + i]) {
                    break;
                }
                if (i == m - 1) {
                    return windowStart;
                }
            }
        }

        return -1;
    }

    // Rabin-Karp Algorithm 

    
};

int main() {
    Solution s;
    cout <<s.strStr("sadbutsad", "sad") << endl; // 0
    cout <<s.strStr("leetcode", "leeto")<< endl; // -1
    cout <<s.strStr("mississippi", "issip") << endl; // 4
    cout <<s.strStr("mississippi", "pi") << endl; // 9
    return 0;
}