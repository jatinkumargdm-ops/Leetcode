class Solution {
public:
    bool isPowerOfThree(int n) {
        //1st brute force
        // if (n <= 0)
        //     return false;
        // while (n % 3 == 0) {
        //     n = n / 3;
        // }
        // return n == 1;

        // 2nd approach largest power of three divides all
        return n > 0 && 1162261467 % n == 0;

        // 3rd approach: every power of 3 has exactlt one 1 in base 3 and rest all are 0
    //  if (n <= 0)
    //         return false;
    //     int count = 0;

    //     while (n > 0) {
    //         if (n % 3 == 1)
    //             count++;
    //         else if (n % 3 == 2)
    //             return false;

    //         n = n / 3;
    //     }
    //     return count == 1;
    }
};