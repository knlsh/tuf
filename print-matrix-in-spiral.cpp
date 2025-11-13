#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top = 0;
        int left = 0;
        int right = matrix[0].size()-1; // size of row
        int bottom = matrix.size()-1; // size of column

        while (top <= bottom && left <= right) {
            
            // print from top to right
            for (int i=left; i<=right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            // print from right to bottom
            for (int i=top; i<=bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // print from right to left
            if (top <= bottom) {
                for (int i=right; i>=left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            //print from left to top
            if (left <= right) {
                for (int i=bottom; i>=top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;   
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> nums = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    vector<int> ans = sol.spiralOrder(nums);
    for (int x: ans) {
        cout << x << ", ";
    }
} 