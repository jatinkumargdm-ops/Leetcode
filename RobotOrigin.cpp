#include<string>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
    //0(n)and 0(1)
            // int up = 0, down = 0, left = 0, right = 0;
            // for (char move : moves) {
            //     if (move == 'U')
            //         up++;
            //     else if (move == 'D')
            //         down++;
            //     else if (move == 'L')
            //         left++;
            //     else if (move=='R')
            //         right++;
            // }
            // return up == down && left == right;

        int x = 0, y = 0;
        for (char move : moves) {
            if (move == 'U')
                y++;
            else if (move == 'D')
                y--;
            else if (move == 'L')
                x--;
            else
                x++;
        }
        return !x && !y;

//Switch
    //     int x = 0, y = 0;
    //     for (char c : moves) {
    //         switch (c) {
    //             case 'U': y++; break;
    //             case 'D': y--; break;
    //             case 'L': x--; break;
    //             case 'R': x++; break;
    //         }
    //     }
    //     return x == 0 && y == 0;
   
   //count()
        //  return count(moves.begin(), moves.end(), 'U') ==
        //            count(moves.begin(), moves.end(), 'D') &&
        //            count(moves.begin(), moves.end(), 'L') ==
        //            count(moves.begin(), moves.end(), 'R');
    }
};