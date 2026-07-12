class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    // 1st approach brute force in 0(n2) time and 0(n)space
        //  vector<bool> result;
        // for (int i = 0; i < candies.size(); i++) {
        //     bool greatest = true;
        //     for (int j = 0; j < candies.size(); j++) {
        //         if (candies[i] + extraCandies < candies[j]) {
        //             greatest = false;
        //             break;
        //         }
        //     }
        //     result.push_back(greatest);
        // }

        // return result;

// 2nd approach where if we already find the max first we dont need to check with each individual element.
    int max= candies[0];
    for(int i=1;i<candies.size();i++){
        if(candies[i]>max) max=candies[i];
    }
    vector<bool> result;
    for(int i=0;i<candies.size();i++){
        if(candies[i]+extraCandies < max){
            result.push_back(false);
        }
        else result.push_back(true);
    }
    return result;
 }
};