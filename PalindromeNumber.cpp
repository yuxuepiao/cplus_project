#include<string>
#include<vector>
#include<iostream>
#include<climits>
#include<cmath>


using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        if (x == 0 ) {
            return true;
        }
        // (log10(number) + 1)
        int digits = log10(x) + 1;
        int match = 0;
        int i = digits;
        while(i > 1) {
            if ((x / (int)pow(10, i - 1))%10 != (x / (int)pow(10, digits - i)) % 10) {
                return false;
            }
            i--;
        }


        return true;
        
    }

    bool isPalindrome2(int x) {
        if( x < 0 )
            return false;
        long int reversed = 0;
        long int temp = x;
        while( temp != 0 )
        {
            int digit = temp % 10;
            reversed = reversed*10 + digit;
            temp = temp/10;
        }
        if( reversed == x )
            return true;
        else 
            return false;
    }
       
};

int main() {
    Solution s;
    cout << s.isPalindrome(121) << endl;
    cout << s.isPalindrome(-121) << endl;
    cout << s.isPalindrome(10) << endl;
    cout << s.isPalindrome2(12321) << endl;
    cout << s.isPalindrome(0) << endl;
    return 0;
}