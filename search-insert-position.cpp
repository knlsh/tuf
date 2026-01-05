#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    // bruteforce
    /* int searchInsert(vector<int> &nums, int target)  {
       for (int i=0; i<nums.size(); i++) { 
            if (nums[i] == target) {
                return i;
            } else if (nums[i] > target) {
                return i;
            }
       }
       return nums.size();
    } */

    // optimal
    int searchInsertOptimal(vector<int> &nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = n;
        while(low < high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (target > nums[mid]) {
                ans = mid;
                low = mid + 1;
            } else {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s1;
    vector<int> nums = {1, 3, 5, 6};
    cout << s1.searchInsertOptimal(nums, 4);
}