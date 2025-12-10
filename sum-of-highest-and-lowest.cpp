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

    int bruteforce(vector<int>& nums) {
        int visited[10000] = {0};
        int maxFreq = INT_MIN; 
        int minFreq = INT_MAX;
        
        for (int i=0; i<nums.size(); i++) {
            int freq = 0;
            if (visited[nums[i]] == 0) {
                for (int j=i; j<nums.size(); j++) {
                    visited[nums[i]] = 1;
                    if (nums[i] == nums[j]) {
                        freq++;
                    }

                    maxFreq = max(freq, maxFreq);
                    minFreq = min(freq, minFreq);
                }
            }
        }
        return maxFreq + minFreq;
    }
};

int main() {
    vector<int> nums = {10, 9, 7, 7, 8, 8, 8};
    Solution sol;
    cout << sol.bruteforce(nums);
}