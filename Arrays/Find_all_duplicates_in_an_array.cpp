#include<iostream>
#include<vector>
#include<algorithm>


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            int index = abs(nums[i])%n;
            if(nums[index]<0){
                ans.push_back(abs(nums[i]));
            }
            nums[index] *= -1;
        }
        return ans;
    }
};