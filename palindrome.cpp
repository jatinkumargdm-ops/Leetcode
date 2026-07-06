class Solution {
public:
    bool isPalindrome(int x) {
// approach 1 conventional wala college exam method 
    //     if (x < 0 )
    //       return false;
    //     int temp = x;
    //     long long int reverse = 0;

    //     while (temp > 0) {
    //         int digit = temp % 10;
    //         reverse = reverse * 10 + digit;
    //         temp = temp / 10;
    //     }

    //     if (reverse == x)
    //         return true;
    //     else 
    //         return false;
    // }

// approach 2 me we divide half into reverse only
   if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reverse = 0;
        while (x > reverse) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }
        return x == reverse || x == reverse / 10;
    }

// 3rd approach using 2 pointers on string beacuse integer dont have indices
    // if (x < 0)
    //         return false;

    //     string s = to_string(x);

    //     for (int i = 0, j = s.length()- 1; i < j; i++, j--) {
    //         if (s[i] != s[j])
    //             return false;
    //     }

    //     return true;
    // }
};
        