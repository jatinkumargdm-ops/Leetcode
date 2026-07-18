#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
class Solution {
public:
//1st approach using gcd function:
    //    int gcd(int a, int b) {
    //         while (b != 0) {
    //             int temp = b;
    //             b = a % b;
    //             a = temp;
    //         }
    //         return a;
    // }
    int findGCD(vector<int>& nums) {
         int mini = *min_element(nums.begin(), nums.end());
         int maxi = *max_element(nums.begin(), nums.end());
        return gcd(maxi, mini);
  


//2nd : Brute 
        // int gcd = 1;
        // for (int i = 1; i <= mini; i++) {
        //     if (mini % i == 0 && maxi % i == 0) {
        //         gcd = i;
        //     }
        // }

        // return gcd;
    }
};