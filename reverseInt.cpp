#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
         int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x = x / 10;
            // overflow condn for int and edge cases
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;
            //  underflow condn
            else if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;
            else rev = rev * 10 + digit;
        }
        return rev;
    }
    //on 0(logn )time and 0(1)space
    };