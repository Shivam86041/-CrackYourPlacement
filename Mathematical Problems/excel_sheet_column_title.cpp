#include<iostream>
#include<algorithm>
#include<vector>

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str = "";
        while(columnNumber>0){
            int a = (columnNumber - 1)%26;
            char ch = 'A' + a;
            str.push_back(ch);
            columnNumber = (columnNumber - 1)/26;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};