#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int secondHighestOccurringElement(vector<int>& nums) {
            int maxEle = -1;
            int secondMaxEle = -1;
            int maxFreq = 0;
            int secondMaxFreq = 0;
            
            unordered_map<int, int> umap;

            for (int i=0; i<nums.size(); i++) {
                umap[nums[i]]++;
            }

            for (auto it : umap) {
                int ele = it.first;
                int freq = it.second;

                if (freq > maxFreq) {
                    secondMaxFreq = maxFreq;
                    secondMaxEle = maxEle;
                    maxFreq = freq;
                    maxEle = ele;
                } else if (freq == maxFreq) {
                    maxEle = min(ele, maxEle);
                }
                else if (freq > secondMaxFreq) {
                    secondMaxFreq = freq;
                    secondMaxEle = ele;
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