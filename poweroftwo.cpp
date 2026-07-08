class Solution {
public:
    bool isPowerOfTwo(int n) {
    //1st approach using loops    
        // if (n <= 0)
        //     return false;
        // while (n % 2 == 0) {
        //     n = n / 2;
        // }
        // return n == 1;
    

    //2nd approach using highest power of two
    //  return n > 0 && 1073741824 % n == 0;

    //3rd approach using bit manipulation 
    if (n <= 0)
            return false;
        return (n & (n - 1)) == 0;
    
    //4th approach using exactlt one 1 in the binary 
    //   if (n <= 0)
    //         return false;

    //     int count = 0;

    //     while (n > 0) {
    //         if (n &1== 1)
    //             count++;

    //         n = n / 2;
    //     }

    //     return count == 1;
    }
};