// class Solution {
// public:
//     int pivotInteger(int n) {
//        int s = (n + 1) * n / 2;
//        return sqrt(s) == int(sqrt(s)) ?  int(sqrt(s)) : -1;
//     }
// };


class Solution {
public:
    int pivotInteger(int n) {
        int start = 0;
        int end = 0;
        for(int i=n;i>0;i--){
            start = (i*(i+1))/2;
            end +=i;
            if(start == end)    return i;
        }
        return -1;
    }
};


#include <cmath>

class Solution {
public:
    int pivotInteger(int n) {
        int s = (n + 1) * n / 2;
        
        if (sqrt(s) == int(sqrt(s))) {
            return int(sqrt(s));
        } else {
            return -1;
        }
    }
};
