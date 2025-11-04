#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int n = nums.size();

        if (n < 2) {
            return -1;
        }

        int secondLargest = -1;
        sort(nums.begin(), nums.end());

        for (int i=n-2; i>=0; i--) {
            if (nums[i] != nums[i+1]) {
                secondLargest = nums[i];
                break;
            }
        }

        return secondLargest;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 4, 5, 6, 11, 3, 5};
    cout << sol.secondLargestElement(nums);
}