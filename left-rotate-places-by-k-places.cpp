#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        while (k != 0) {
            int temp = nums[0];
            for (int i=0; i<nums.size()-1; i++) {
                nums[i] = nums[i+1];
            }
            nums[nums.size()-1] = temp;
            k--;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    sol.rotateArray(nums, 2);
    for (int x : nums) {
        cout << x << ", ";
    }
}