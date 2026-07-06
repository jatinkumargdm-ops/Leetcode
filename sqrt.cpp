class Solution {
public:
// First approach overflows for x = 2^31

    // int mySqrt(int x) {
    //     long long i = 0;
    //     while(i * i <= x){
    //         i++;
    //     }
    //     return i - 1;
    // }

// 2nd approach to beat the overflow thing
    // int mySqrt(int x) {
    //         int i = 1;
    //         while(i <= x / i){
    //             i++;
    //         }
    //         return i - 1;
    //     }

//3rd approach Binary search between 0 and x 
    //  int mySqrt(int x) {
    //     if(x==0)
    //         return 0;

    //     int left=1;
    //     int right=x;

    //     int root=0;

    //     while(left<=right){

    //         int mid=left+(right-left)/2;

    //         long long square=1LL*mid*mid; //1LL is used to convert int mid to long long mid for multiplication of the same operator 

    //         if(square==x)
    //             return mid;
    //         else if(square<x){
    //             root=mid;
    //             left=mid+1;
    //         }

    //         else{
    //             right=mid-1;
    //         }

    //     }
    //     return root;
    // }

//4th approach to counter the long long thing in 3rd approach
int mySqrt(int x) {
        if (x == 0)
            return 0;

        int left = 1;
        int right = x;
        int root = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (mid == x / mid && x % mid == 0) {
                return mid;
            }

            if (mid <=x / mid) {
                root = mid;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return root;
    }

//5th one but not that good simply return srqt(x);

//6th one Newtons Method solves the same in log log x
    // int mySqrt(int x) {
    //         if (x == 0)
    //             return 0;

    //         long long root = x;

    //         while (root > x / root) {
    //             root = (root + x / root) / 2;
    //         }

    //         return root;
    //     }
};