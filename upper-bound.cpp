#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    // bruteforce
    int upperBound(vector<int> &nums, int x){
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] > x) {
                return i;
            }
        }
        return nums.size();
    } 

    // optimal
    int upperBoundOptimal(vector<int> &nums, int x) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = n;
        while(low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] > x) {
                ans = mid;
                high = mid-1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main () {
    Solution s1;
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << s1.upperBoundOptimal(nums, 1);
}