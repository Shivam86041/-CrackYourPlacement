#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //int col = matrix[0].size();
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int row = 0;row<n;row++){
            reverse(matrix[row].begin(), matrix[row].end());
        }
    }
};