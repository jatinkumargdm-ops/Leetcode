
#include <vector>
#include<numeric>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
  //1st approach brute force: checking each partition one by one.0(n2)and 0(1)
    //   int n = nums.size();
    //     int count = 0;

    //     for (int i = 0; i < n-1 ; i++) {
    //         int leftSum = 0;
    //         int rightSum = 0;

    //         for (int j = 0; j <= i; j++)
    //             leftSum += nums[j];

    //         for (int j= i + 1;j< n; j++)
    //             rightSum += nums[j];

    //         if ((leftSum - rightSum) % 2 == 0)
    //             count++;
    //     }
    //     return count;

//2nd approach using two pass and calculating totalsum first 0(2n)and 0(1)
    //    int totalSum = 0;
       
    //     for (int i=0;i<nums.size();i++)
    //         totalSum += nums[i];

    //     int leftSum = 0;
    //     int count = 0;

    //     for (int i = 0; i < nums.size() - 1; i++) {
    //         leftSum += nums[i];
    //         int rightSum = totalSum - leftSum;

    //         if ((leftSum - rightSum) % 2 == 0)
    //             count++;
    //     }

    //     return count;

//3rd approach using one pass only via maths                                       leftsum-rightsum is even means l+r=Sum so l-r=l-(Sum-l)=2l-Sum should be even ....here 2l is even so Sum must be even too and all partitions wil be valid. 0(n)and 0(1)
        // int totalSum = 0;
        // for (int num : nums)
        //     totalSum += num;

        // if (totalSum % 2 == 0)
        //     return nums.size() - 1;
        // else return 0;
        
//One liner magic 0(n)and 0(1) check totalsum using ternary haha
       return (accumulate(nums.begin(), nums.end(), 0) % 2) ? 0 : nums.size() - 1;
    }
};