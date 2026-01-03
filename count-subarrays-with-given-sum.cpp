#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    /* int subarraySum(vector<int> &nums, int k){
        int count = 0;
        for (int i=0; i<nums.size(); i++) {
            for (int j=i; j<nums.size(); j++) {
                int sum = 0;
                for (int k=i; k<=j; k++) {
                    sum += nums[j];
                    if (sum == k) {
                        count++;
                        break;
                    }
                }    
            }
        }
        return count;
    } */

    /* int subarraySum(vector<int> &nums, int k) {
        int n = nums.size(); 
        int count = 0;
        for (int i=0; i<n; i++) {
            int subarrayCount = 0;
            for (int j=i; j<n; j++) {
                subarrayCount += nums[j];
                if (subarrayCount == k) {
                    count++;
                }
            }
        }
        return count;
    } */

    int subarraySum(vector<int> &nums, int k) {
        unordered_map<int, int> mpp;
        int count = 0;
        int preSum = 0;
        mpp[0] = 1;

        for (int i=0; i<nums.size(); i++) {
            preSum += nums[i];
            int remove = preSum - k;
            count += mpp[remove];
            mpp[preSum] += 1;
        }
        return count;
    }    
};

int main() {
    Solution s1;
    vector<int> nums = {1, 1, 1};
    cout << s1.subarraySum(nums, 2);
}