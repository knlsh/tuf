#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int highestOccurringElement (vector<int>& nums)
        {
            // store max occuring element with frequency in variable
            int maxEle = 0;
            int maxFreq = 0;

            // create unordered map to store key and value pairs
            unordered_map<int, int> umap;

            // add the values of nums in umap
            for (int i=0; i<nums.size(); i++) {
                umap[nums[i]]++;
            }

            // loop through again and check the max frequency
            for (auto it : umap) {
                int ele = it.first;
                int freq = it.second;
                
                if (maxFreq < freq) {
                    maxFreq = freq;
                    maxEle = ele;
                } else if (maxFreq == freq) {
                    if (ele < maxEle) {
                        maxEle = ele;
                    }
                }
            }

            return maxEle;
        }
    };

    int main() {
        Solution sol;

        vector<int> nums = {1, 2, 3, 4, 5, 5, 3};
        cout << sol.highestOccurringElement(nums);
    }