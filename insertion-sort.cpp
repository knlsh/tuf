#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i=0; i<=n-1; i++) {
            int j = i;
            while (j>0 && nums[j-1] > nums[j]) {
                swap (nums[j-1], nums[j]);
                j--;
            }
        }
        return nums;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {3, 5, 7, 1, 2};
    sol.insertionSort(nums);
    for (int x : nums) {
        cout << x << ", ";
    }
}