#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore Voting Algorithm
        int count = 0;
        int candidate = 0;
        for(int num:nums){
            if(count==0){
                candidate = num;
            }
            if(candidate == num) count++;
            else count--;
        }
        return candidate;
    }
};