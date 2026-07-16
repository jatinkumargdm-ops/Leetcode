#include <iostream>
#include <vector>
#include <algorithm> // sort(), max()
#include <numeric>   // gcd()
using namespace std;
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maximum=nums[0];
        // vector<int> prefixGcd;     //extra space array to store the prefixGcd 0(n)
        for(int i=0;i<n;i++){
            maximum=max(maximum,nums[i]); //using max function
            // prefixGcd.push_back(gcd(nums[i],maximum));
            nums[i] = gcd(nums[i], maximum);

        }
        
        // sort(prefixGcd.begin(),prefixGcd.end());
        sort(nums.begin(), nums.end());

        long long result=0;
        for(int i=0;i<n/2;i++){
           result += gcd(nums[i], nums[n- i -1]); 
            // result+=gcd(prefixGcd[i],prefixGcd[n-i-1]);
        }
       return result;
        
    }
 };
//  Time 0(nlogn) and space 0(1)