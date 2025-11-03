#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {

        int maxEle = nums[0];

        for (int i=1; i<nums.size(); i++) {
            if (nums[i] > maxEle) {
                maxEle = nums[i];
            }
        }

        return maxEle;
        
        // Can sort the elements and return the last element (Non-Optimized)
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 1, -99, 0};
    cout << sol.largestElement(nums);
}