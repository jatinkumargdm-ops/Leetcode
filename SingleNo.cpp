#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
        // 1st approach brute force using counting no of times an element 0(n2)
    // for (int i = 0; i < nums.size(); i++) {
    //         int count = 0;
    //         for (int j = 0; j < nums.size(); j++) {

    //             if (nums[i] == nums[j]) {
    //                 count++;
    //             }
    //         }

    //         if (count == 1) {
    //           return nums[i];
    //         }
    //     }
    //     return -1 ;}     
 
 //2nd approach using sorting and comparing in 0(n log n )but space 0(1)
    // sort(nums.begin(), nums.end());
    //     int n = nums.size();
    //     for (int i = 0; i < n - 1; i = i + 2) {
    //         if (nums[i] != nums[i + 1]) {
    //             return nums[i];
    //         }
    //     }

    //     return nums[n - 1];
    // }

    //3rd using hash maps but takes space n also
    // unordered_map<int, int> m;
    //         for (int i = 0; i < nums.size(); i++) { 
    //         //for(int num:nums){    
    //             m[nums[i]]++;
    //         }

    //         for (int i = 0; i < nums.size(); i++) {
    //             if (m[nums[i]] == 1) {
    //                 return nums[i];
    //             }
    //         }
    //         return -1;

    //4th one using bit manipulation
    int single = 0;
            for (int i = 0; i < nums.size(); i++) {
                single = single ^ nums[i];
            }

            return single;
    }
};
