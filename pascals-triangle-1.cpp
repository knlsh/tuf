#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int pascalTriangleI(int r, int c) {
        return nCr(r-1, c-1);
    }

    /* 
        Pascals triangle: 
                    1
                1       1
            1       2       1
        1       3       3       1
    1       4       6       4       1

    To find the value at specific (row, col) - we can use nCr - which is n! / r! * (n-r)!
    But instead of calculating the entire factorial of a value we can simplify it to n * n-1 * n-2 * .. * (n-r)! / r! * (n-r)!
    This would cross off (n-r)! from numerator and denominator and would take down TC further
    */
private:
    int nCr(int n, int r) {
        int res = 1;
        for (int i=0; i<r; i++) {
            res = res * (n-i);
            res = res / (i+1);
        }
        return res;
    }
};

int main() {
    Solution sol;
    cout << sol.pascalTriangleI(4, 2);
}