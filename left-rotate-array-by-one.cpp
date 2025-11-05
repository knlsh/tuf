#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int first = nums[0];

        for (int i=0; i<nums.size()-1; i++) {
            nums[i] = nums[i+1];
        }

        nums[nums.size()-1] = first;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    sol.rotateArrayByOne(nums);
    for (int x : nums) {
        cout << x << ", ";
    }
}