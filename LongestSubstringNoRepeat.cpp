#include<string>
#include<vector>
#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        // we will store a senitel value of -1 to simulate 'null'/'None' in C++
        vector<int> chars(128, -1);

        int left = 0;
        int right = 0;

        int res = 0;
        while (right < s.length()) {
            char r = s[right];

            int index = chars[r];
            if (index != -1 and index >= left and index < right) {
                left = index + 1;
            }
            res = max(res, right - left + 1);

            chars[r] = right;
            right++;
        }
        return res;
    }

    int lengthOfLongestSubstring2(string s) {
        unordered_map<char, int> chars;

        int left = 0;
        int right = 0;

        int res = 0;
        while (right < s.length()) {
            char r = s[right];
            chars[r]++;

            while (chars[r] > 1) {
                char l = s[left];
                chars[l]--;
                left++;
            }

            res = max(res, right - left + 1);

            right++;
        }

        return res;
    }
};


int main() {
    Solution s;

    cout << s.lengthOfLongestSubstring("abcabcbb") << endl; // 3
    cout << s.lengthOfLongestSubstring("bbbbb") << endl; // 1
    cout << s.lengthOfLongestSubstring("pwwkew") << endl; // 3
    cout << s.lengthOfLongestSubstring("") << endl; // 0
    cout << s.lengthOfLongestSubstring(" ") << endl; // 1
    cout << s.lengthOfLongestSubstring("dvdf") << endl; // 3
    return 0;
}