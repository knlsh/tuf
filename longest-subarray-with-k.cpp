#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
    /* int longestSubarray(vector<int> &nums, int k){
        int longest = 0;
        for (int i=0; i<nums.size(); i++) {
            for (int j=i; j<nums.size(); j++) {
                int currentSum = 0;
                for (int k=i; k<=j; k++) {
                    currentSum += nums[k];
                }
                if (currentSum == k) {
                        longest = max(longest, j-i+1);
                }
            }
        }
        return longest;
    } */

    int longestSubarray(vector<int> nums, int k) {
        map<long long, int> mp;
        long long sum;
        int maxLen = 0;
        for (int i=0; i<nums.size(); i++) {
            sum += nums[i];
            if (sum == k) {
                maxLen = max(maxLen, i+1);
            }
            long long rem = sum - k;
            if (mp.find(rem) != mp.end()) {
                int len = i - mp[rem];
                maxLen = max(len, maxLen);
            }

            if (mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
        }
        return maxLen;
    }
};

int main() {
    Solution s1;
    vector<int> nums = {1,2,1,2,1};
    cout << s1.longestSubarray(nums, 3);
}