#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    /* 
                    1
                1   2   1
            1     3   3     1
        1       4   6   4       1
        ...


    */

    vector<int> pascalTriangleII(int r) {
        vector<int> ans(r);

        ans[0] = 1;

        for (int i=1; i<r; i++) {
            ans[i] = (ans[i-1]*(r-i))/i;
        }

        return ans;
        
    }
};

int main() {
    Solution sol;
    vector<int> res = sol.pascalTriangleII(4);
    for (int x: res) {
        cout << x << ", ";
    }
}