#include<vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        while(i>=0){
            if(digits[i]!=9){
                digits[i]+=1;
                return digits;
            }
            
            //else we will get 9
        digits[i]=0;
        i--;
        }

        digits.insert(begin(digits),1); //1 is the carry forward till the end
        return digits;
    }
}; //0(1) space and 0(n)time

//0(n) both but since the constraint shows the integer length upto 100 over flow in long long or any container if we try to convert it into integer first.

        // vector<int> plusOne(vector<int>& digits) {

        //     long long num = 0;

        //     for (int digit : digits) {
        //         num = num * 10 + digit;
        //     }

        //     num++;

        //     vector<int> arr;

        //     while (num > 0) {
        //         arr.push_back(num % 10);
        //         num /= 10;
        //     }

        //     reverse(arr.begin(), arr.end());
        //     return arr;
        // }