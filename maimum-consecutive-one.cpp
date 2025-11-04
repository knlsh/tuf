#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // Optimized Solution

        int cnt = 0; 
        int maxi = 0;

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;
                maxi = max(maxi, cnt);
            } else {
                cnt = 0;
            }
        }

        return maxi;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1, 0, 1, 0, 1};
    cout << sol.findMaxConsecutiveOnes(nums);
}