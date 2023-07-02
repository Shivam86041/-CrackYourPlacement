#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        for(int k = 0;k<nums.size();k++){
            if(nums[k]>0 || nums[k]<0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    }
};