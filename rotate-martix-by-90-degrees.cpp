#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void rotateBy90Degrees(vector<vector<int>>& matrix) {
            int n = matrix.size();
            vector<vector<int>> rotated(n, vector<int>(n, 0));

            for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++) {
                    rotated[j][n-i-1] = matrix[i][j];
                }
            }

            for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++) {
                    matrix[i][j] = rotated[i][j];
                }
            }
        }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sol.rotateBy90Degrees(matrix);
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    for (int i=0; i<rowSize; i++) {
        for (int j=0; j<colSize; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}