#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
         int minFreq = nums.size();
         int maxFreq = 0;

         unordered_map<int, int> umap;

         for (int i=0; i<nums.size(); i++) {
            umap[nums[i]]++;
         }

         for (auto it : umap) {
            int freq = it.second;

            maxFreq = max(freq, maxFreq);
            minFreq = min(freq, minFreq);
         }

         return maxFreq + minFreq;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3, 3, 3};
    Solution sol;
    cout << sol.sumHighestAndLowestFrequency(nums);
}