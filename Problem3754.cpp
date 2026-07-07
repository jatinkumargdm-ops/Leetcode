//concatinating non zero digits and multiplying by their sum.

class Solution {
public:
    long long sumAndMultiply(int n) {
        
        // string s = to_string(n);
        // long long x = 0;
        // int sum = 0;

        // // for (int i = 0; i < s.length(); i++) {
        // //     if (s[i] != '0') {
        //    for(char ch :s ){
        //      if (ch!= '0'){

        //         // int digit = s[i] - '0';
        //         int digit = ch - '0';
        //         x = x * 10 + digit;
        //         sum = sum + digit;
        //     }
        // }
        // return x * sum;


    //2nd approach without converting in string 
         long long rev = 0;
        // Store non zero digits in reverse order
        while (n > 0) {

            int digit = n % 10;

            if (digit != 0) {
                rev = rev * 10 + digit;
            }

            n /= 10;
        }

        long long x = 0;
        int sum = 0;

        // Reverse again to restore original order
        while (rev > 0) {

            int digit= rev % 10;
            x = x * 10 + digit;
            sum += digit;
            rev /= 10;
        }
        return x * sum; 
    }
};