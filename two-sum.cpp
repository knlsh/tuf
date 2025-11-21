#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> mpp;

            int n = nums.size(); 
            vector<int> result;
            for (int i=0; i<n; i++) {
                int num = nums[i];
                int moreNeeded = target - num;

                if (mpp.find(moreNeeded) != mpp.end()) {
                    return {mpp[moreNeeded], i};
                    
                }

                // store the key and value in map
                mpp[num] = i;
            }
            return {-1, -1};
        }
};

int main() {
    Solution sol;
    vector<int> nums = {-4, 4, 9, 9};
    vector<int> result = sol.twoSum(nums, 0);
    for (int x: result) {
        cout << x << ", ";
    }
}