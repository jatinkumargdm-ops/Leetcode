#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
   //first approach...push them in another vector arr twice. in both 0(n)
        //  vector<int> result;
        // for (int i = 0; i < nums.size(); i++) {
        //     result.push_back(nums[i]);
        // }
        // for (int i = 0; i < nums.size(); i++) {
        //     result.push_back(nums[i]);
        // }
        // return result;

//2nd approach to create arr of 2n and same as the question statement says.
        int n = nums.size();
        vector<int> ans(2 * n);
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }
};