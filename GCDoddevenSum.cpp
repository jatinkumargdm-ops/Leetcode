class Solution {
public:
//gcd(a,b)=gcd(b,a%b) until b becomes 0
    int gcdOfOddEvenSums(int n) {
//1st approach brute: 0(n) time and 0(1)space
        // int odd = 0;
        // int even = 0;

        // for (int i = 1; i <= n; i++) {
        //         even += 2*i;
        //         odd += 2*i-1;
        // }
        // return gcd(odd, even);
  

//2nd approach using sum formula for first n odd and even nos. in 0(logn)time for gcd operation and 0(1)space
        // int odd= n * n;
        // int even = n * (n + 1);

        // return gcd(odd, even);

//3rd appeoach is that the gcd(n*n,n(n+1))=n*gcd(n,n+1)=n in 0(1)both time and space complexity
     return n;
    }
};