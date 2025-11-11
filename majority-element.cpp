#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // bruteforce 
        /* int n = nums.size();
        for (int i=0; i<nums.size(); i++) {
            int cnt = 0;
            for (int j=0; j<nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    cnt++;
                }
            }
            if (cnt > n/2) {
                return nums[i];
            }
        } */

        // better
        /*
        map<int, int> result;
        // insert the elements in map
        for (int i=0; i<nums.size(); i++) {
            result[nums[i]]++;
        }
        
        // calculating the value which is occurring greater than n/2
        for (auto itr: result) {
            if (itr.second > nums.size()/2) {
                return itr.first;
            }
        }
        return 0; */

        // optimal: moore's voting algorithm
        int n = nums.size();
        int cnt = 0;
        int ele = 0;

        for (int i=0; i<n; i++) {
            if (cnt == 0) {
                cnt = 1;
                ele = nums[i];
            } else if (ele == nums[i]) {
                cnt++;
            } else {
                cnt--;
            }
        }

        int cnt1 = 0;
        for (int i=0; i<n; i++) {
            if (nums[i] == ele) {
                cnt1++;
            }
        }

        if (cnt1 > n/2) {
            return ele;
        }

        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 5, 6, 6, 6, 6};
    cout << sol.majorityElement(nums);
}