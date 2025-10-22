#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int secondHighestOccurringElement(vector<int>& nums) {
            int maxEle = -1;
            int secondMaxEle = -1;
            int maxFreq = 0;
            int secondMaxFreq = 0;
            
            // using unordered map to store element and frequency
            unordered_map<int, int> umap;

            // add values to map
            for (int i=0; i<nums.size(); i++) {
                umap[nums[i]]++;
            }

            for (auto it : umap) {
                int ele = it.first;
                int freq = it.second;

                // check if freq is maxFreq
                if (freq > maxFreq) {
                    secondMaxFreq = maxFreq;
                    secondMaxEle = maxEle;
                    maxFreq = freq;
                    maxEle = ele;
                
                // if both are equal, check which is the min element and replace 
                } else if (freq == maxFreq) {
                    maxEle = min(ele, maxEle);
                }

                // check if freq is secondMaxFreq
                else if (freq > secondMaxFreq) {
                    secondMaxFreq = freq;
                    secondMaxEle = ele;

                // if both are equal, replace
                } else if (freq == secondMaxFreq) {
                    secondMaxEle = min(ele, secondMaxEle);
                }
            }

            return secondMaxEle;
        }
};

int main() {
    vector<int> nums = {4, 4, 5, 5, 6, 7};
    Solution sol;
    cout << sol.secondHighestOccurringElement(nums);
    return 0;
}