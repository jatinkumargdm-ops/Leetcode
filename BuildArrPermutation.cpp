#include<vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
//1st approach where just storing it into another array in 0(n)both time and space.
    //    int n=nums.size();
    //     vector<int> ans(n);

    //     for (int i = 0; i < n; i++) {
    //         ans[i] = nums[nums[i]];
    //     }
    //     return ans;

//2nd approach using % and / maths manipulation in inplace space.
        int n = nums.size();

      //storing the combination of old and new for future use only
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] + (nums[nums[i]] % n) * n;
        }
        //now storing the final ans
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] / n;
        }

        return nums;
    }
};