#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int i = 0;
            for(i=0; i<nums.size(); i++) {
                if (i != nums[i]) {
                    return i;
                }
            }

            if (nums[nums.size()-1] != i) {
                return i;
            }

            return 0;
        }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 2, 3, 4, 5};
    cout << sol.missingNumber(nums);
}