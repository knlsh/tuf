#include<bits/stdc++.h>

using namespace std;

/* 

### Non optimized version

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for (int i=n-1; i>=1; i--) {
            for (int j=0; j<=i-1; j++) {
                if(nums[j] > nums[j+1]) {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        return nums;
    }
};

*/

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for (int i=n-1; i>=0; i--) {
            bool didSwap = false;
            for (int j=0; j<= i-1; j++) {
                if (nums[j] > nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                    didSwap = true;
                }
            }
            
            if (!didSwap) {
                break;
            }
        }

        return nums;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {3, 2, 1};
    sol.bubbleSort(nums);
    for (int x : nums) {
        cout << x << ", ";
    }
}