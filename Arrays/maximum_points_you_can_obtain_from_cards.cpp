#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        for(int i = 0;i<k;i++){
            sum += cardPoints[i];
        }
        int maxsum = sum;
        for(int exclude = k - 1;exclude>=0;exclude--){
            sum -= cardPoints[exclude];
            sum += cardPoints[cardPoints.size() - k + exclude];
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};