#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;

        // move non zero elements to temp array
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        int tempSize = temp.size();
        // move back non zero elements to nums
        for (int i=0; i<tempSize; i++) {
            nums[i] = temp[i];
        }

        // fill up rest of the positions with 0
        for (int i=tempSize; i<nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 0, 3, 3, 0, 9, 0};
    sol.moveZeroes(nums);
    for (int x : nums) {
        cout << x << ", ";
    }
}