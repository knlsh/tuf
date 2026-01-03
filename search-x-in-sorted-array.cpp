#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    // iterator
    
    int searchIterator(vector<int> &nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while (low <= high) {
            int mid = (low + high) / 2; // middle element
            if (nums[mid] == target) {
                return mid;
            } else if (target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    } 

    // recursive
    
    int recursive(vector<int> nums, int low, int high, int target) {
        int mid = (low + high) / 2;

        if (low <= high) {
            if (nums[mid] == target) {
                return mid;
            } else if (target > nums[mid]) {
                return recursive (nums, mid+1, high, target);
            } else {
                return recursive (nums, low, mid-1, target);
            }
        }
        
        return -1;
    }

    // recursion
    int search(vector<int> &nums, int target) {
        int n = nums.size(); 
        int low = 0;
        int high = n-1;
        return recursive(nums, low, high, target);
    } 
};

int main () {
    Solution s1;
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << s1.search(nums, 0);
}