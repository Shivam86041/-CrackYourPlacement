#include<iostream>
#include<algorithm>
#include<vector>

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x>0 || x<0){
            int rem = x%10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10) return 0;
            ans = ans*10 + rem; 
            x = x/10;
        }
        //if(y<0) return ans*-1;
        return ans;
    }
};