#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int start = 0;
        int end = height.size()-1;
        while(start<=end){
            int lh = height[start];
            int rh = height[end];
            int h = min(lh, rh);
            int l = end - start;
            maxarea = max(maxarea, h*l);
            if(lh < rh) start++;
            else end--;
        }
        return maxarea;
    }
};