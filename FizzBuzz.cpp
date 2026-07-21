#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer; //0(n)both
        // for (int i = 1; i <= n; i++) {
        //         if (i % 15 == 0)
        //             answer.push_back("FizzBuzz");
        //         else if (i % 3 == 0)
        //             answer.push_back("Fizz");
        //         else if (i % 5 == 0)
        //             answer.push_back("Buzz");
        //         else
        //             answer.push_back(to_string(i));
        //     }
        
        for (int i = 1; i <= n; i++) {
            answer.push_back(
                i % 15 == 0 ? "FizzBuzz" :
                i % 3 == 0  ? "Fizz" :
                i % 5 == 0  ? "Buzz" :
                to_string(i)
            );
        }
            return answer;
    }
};

//2nd Using string concatenation 0(n)both
    // class Solution {
    // public:
    //     vector<string> fizzBuzz(int n) {
    //         vector<string> answer;

    //         for (int i = 1; i <= n; i++) {
    //             string str = "";

    //             if (i % 3 == 0) str += "Fizz";
    //             if (i % 5 == 0) str += "Buzz";

    //             answer.push_back(str.empty() ? to_string(i) : str);
    //         }

    //         return answer;
    //     }
    // };


//Without % op

//      vector<string> answer;
//         int fizz = 0, buzz = 0;

//         for (int i = 1; i <= n; i++) {
//             fizz++;
//             buzz++;

//             if (fizz == 3 && buzz == 5) {
//                 answer.push_back("FizzBuzz");
//                 fizz = 0;
//                 buzz = 0;
//             }
//             else if (fizz == 3) {
//                 answer.push_back("Fizz");
//                 fizz = 0;
//             }
//             else if (buzz == 5) {
//                 answer.push_back("Buzz");
//                 buzz = 0;
//             }
//             else {
//                 answer.push_back(to_string(i));
//             }
//         }

//         return answer;
