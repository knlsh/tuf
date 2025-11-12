#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        /* vector<int> result;
        for (int i=0; i<nums.size()-1; i++) {
            int flag = 0;
            for (int j=i+1; j<nums.size(); j++) {
                if (i == nums.size()-2) {
                    break;
                }
                if (nums[i] > nums[j]) {
                    continue;
                } else {
                    flag = 1;
                    break;
                }
            }

            if (flag == 1) {
                continue;
            } else {
                if (i == nums.size()-2) {
                    result.push_back(nums[i+1]);
                } else {
                    result.push_back(nums[i]);
                }
            }
        }

        return result; */

        vector<int> result;
        int maxEle = -100000;
        int n = nums.size();
        
        int max = nums[nums.size()-1];
        result.push_back(nums[nums.size()-1]);

        for (int i=n-2; i>=0; i--) {
            if (nums[i] > max) {
                result.push_back(nums[i]);
                max = nums[i];
            }
        }

        reverse(result.begin(), result.end());

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 5, 3, 1, -4, -5};
    vector<int> result = sol.leaders(nums);
    for (int x : result) {
        cout << x << ", ";
    }
}