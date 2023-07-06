#include<iostream>
#include<algorithm>
#include<vector>

class Solution {
public:
    bool isHappy(int n) {
        int ans = 0;
        set<int> st;
        while(1){
            ans = 0;
        while(n>0){
            int rem = n%10;
            ans = ans + rem*rem;
            n = n/10;
        }
        if(ans==1) return true;
        else if(st.find(ans)!=st.end()){
            return false;
        }
        st.insert(ans);
        n = ans;
        }
        return false;
    }
};