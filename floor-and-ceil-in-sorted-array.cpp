#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int ceilCalc(vector<int> &nums, int x) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = -1;

        // binary search
        while (low <= high) {
            int mid = (high + low) / 2;
            
            if (nums[mid] >= x) {
                high = mid - 1;
                ans = nums[mid];
            } else {
                low = mid + 1;
            } 
        }
        return ans;
    }

    int floorCalc(vector<int> &nums, int x) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int ans = -1;

        // binary search
        while(low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] > x) {
                high = mid - 1;
            } else {
                low = mid + 1;
                ans = nums[mid];
            }
        }

        return ans;
    }

    vector<int> getFloorAndCeil(vector<int> &nums, int x) {
        
        // bruteforce
        
        /*
        vector<int> res;
        int low = -1;
        int high = -1;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == x) {
                res.push_back(nums[i]);
                res.push_back(nums[i]);
                return res;
            }
        }

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] < x) {
                low = nums[i];
            }
        }

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] > x) {
                high = nums[i];
                break;
            }
        }

        res.push_back(low);
        res.push_back(high);

        return res;
    } */

    // optimal approach

    int n = nums.size();
    int floor = floorCalc(nums, x);
    int ceil = ceilCalc(nums, x);
    return {floor, ceil};
    }
};

int main() {
    Solution s1;
    vector<int> nums = {3, 4, 4, 7, 8, 10};
    vector<int> res = s1.getFloorAndCeil(nums, 5);
    for (int x: res) {
        cout << x << " ";
    }
}