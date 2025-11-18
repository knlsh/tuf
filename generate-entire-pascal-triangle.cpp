#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> calculateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;

        ansRow.push_back(ans);

        for (int col = 1; col<row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansRow.push_back(ans);
        }

        return ansRow;
    }


    vector<vector<int>> pascalTriangleIII(int n) {
        /* 
                            1
                        1       1
                    1       2       1
                1       3       3       1
            1       4       6       4       1
        1       5       10      10      5       1
        */


        vector<vector<int>> result;
        for (int i=1; i<=n; i++) {
            vector<int> ans = calculateRow(i);
            result.push_back(ans);
        }
        return result;

    }
};

int main() {
    int n = 5;
    Solution sol;

    // Generate Pascal's Triangle with n rows
    vector<vector<int>> pascalTriangle = sol.pascalTriangleIII(n);

    // Output the Pascal's Triangle
    for (auto& row : pascalTriangle) {
        for (auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}