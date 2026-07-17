#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
//brute force 0(n)and0(1)
    //  int x = 0;
    // for (int i = 0; i < operations.size(); i++) {
    //    if (operations[i] == "X--") {
    //            x--;
    //         }
    //    else if (operations[i] == "X++") {
    //             x++;
    //         }
    //    else if (operations[i] == "++X") {
    //         ++x;
    //         }
    //      else {
    //             --x;
    //         }
    //     }
    //     return x;   

//2nd approach check the middle character only instead of four strings
        // int x = 0;
        // for (string op : operations) {
        //     if (op[1] == '+')
        //         x++;
        //     else
        //         x--;
        // }
        // return x;

//approach 2 using ternary operator 
       int x = 0;

        for (string op : operations)
            x += (op[1] == '+') ? 1 : -1;

        return x;
    }
};