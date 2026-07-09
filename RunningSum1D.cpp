#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i] + nums[i - 1];
        }
        return nums;

// 2nd approach using some extra space to store the sum of array in temp 

        //   vector<int> temp; //empty vector
       
        // int sum = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     sum += nums[i];
        //     temp.push_back(sum);
        // }
        //  return temp;


// 1st approach using brute force in 0(n2) and 0(n)

        //  vector<int> temp;

        // for (int i = 0; i < nums.size(); i++) {
        //     int sum = 0;

        //     for (int j = 0; j <= i; j++) {
        //         sum += nums[j];
        //     }

        //     temp.push_back(sum);
        // }

        // return temp;

    }
};