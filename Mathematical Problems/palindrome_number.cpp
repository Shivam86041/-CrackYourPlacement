#include<iostream>
#include<algorithm>
#include<vector>

class Solution {
public:
    bool isPalindrome(int x) {
        long long int ans = 0;
        long long int y = x;
        while(x>0){
            long long int rem = x%10;
            ans = ans*10 + rem;
            x=x/10;
        }
        if(ans==y) return true;
        return false;
    }
};