class Solution {
public:
//brute force ...checking all ugly no one by one in 0(n logn)
    // int ugly(int n) {
    //      if(n<=0)return false;
    //     while(n%2==0 || n%3==0 || n%5 ==0){
    //         if(n%2==0) n=n/2;
    //         if(n%3==0) n=n/3;
    //         if(n%5==0) n=n/5;
    //     }
    //     return n==1; 
    // }
    //     int nthUglyNumber(int n) {
    //     int count = 0;
    //     int num = 1;

    //     while (true) {
    //         if (ugly(num)) {
    //             count++;
    //             if (count == n)
    //                 return num;
    //         }
    //         num++;
    //     }
    // }
    //0(nlogn) time and 0(1) space
    
    //  2nd approach tried to approach using multiples and pointers but it fails for n=11 when  14 also gives an ugly number.
//     int nthUglyNumber(int n) {
//         if(n==1) return 1;
//         int p1 = 0, p2 = 0, p3 = 0;
//         int res=1;
//         for (int i = 1; i < n; i++) {

//             int twoMultiple = (p1 + 1) * 2;
//             int threeMultiple = (p2 + 1) * 3;
//             int fiveMultiple = (p3 + 1) * 5;

//             res = min(twoMultiple, min(threeMultiple, fiveMultiple));

//             if (res == twoMultiple) p1++;
//             if (res == threeMultiple) p2++;
//             if (res == fiveMultiple) p3++;
          
//         }

//        return  res;
//     }
// };


//3rd approach using extra space and three pointers in dp
    int nthUglyNumber(int n) {
        vector<int> result(n);

        result[0] = 1;

        int p1=0,p2=0,p3 = 0; //three pointers for tracking
     

        for (int i = 1; i < n; i++) {
            int twoMultiple = result[p1] * 2;
            int threeMultiple = result[p2] * 3;
            int fiveMultiple = result[p3] * 5;

            result[i] = min(twoMultiple, min(threeMultiple, fiveMultiple));

            if (result[i] == twoMultiple) p1++;
            if (result[i] == threeMultiple) p2++;
            if (result[i] == fiveMultiple) p3++;
        }
        return result[n - 1];
    }
};
//0(n) time and 0(n) space