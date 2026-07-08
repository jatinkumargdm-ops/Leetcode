class Solution {
public:
    bool isPowerOfFour(int n) {
    //1st highest power of 4  fails this time unlike in 2 and 3 powers.
        // return n > 0 && (n != 2 ) && 1073741824 % n == 0;

        //2nd brute
        //  if (n <= 0)
        //     return false;

        // while (n % 4 == 0) {
        //     n = n / 4;
        // }
        // return n == 1;
    
    //2nd using base 4.
    // if (n <= 0)
    //         return false;
    //     int count = 0;
    //     while (n > 0) {

    //         if (n % 4 == 1)
    //             count++;
    //         else if (n % 4 == 2 || n % 4 == 3)
    //             return false;
    //         n = n / 4;
    //     }
    //     return count == 1;
    
    //3rd using bit manipulation
    return n>0 && (n & (n-1))== 0  && (n-1)%3 == 0 ;
    }
};