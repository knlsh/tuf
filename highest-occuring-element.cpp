#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int highestOccurringElement (vector<int>& nums)
        {
            // store max occurring element with frequency in variable
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

        /* 
        Bruteforce:
            int calc (int arr[], int size) {
                int visitor[10000 + 1] = {0};
                int maxCnt = -1;
                int ele = -1;

                for (int i=0; i<size; i++) {
                    int count = 0;
                    if (visitor[arr[i]] == 0) {
                        for (int j=i; j<size; j++) {
                            // cout << "arr[i]: " << arr[i] << " arr[j]: " << arr[j] << endl;
                            if (arr[i] == arr[j]) {
                                count++;
                            }
                        }
                        if (maxCnt < count) {
                            // cout << "maxCnt: " << maxCnt << endl;
                            maxCnt = count;
                            ele = arr[i];
                        }
                        visitor[arr[i]] = 1;
                    }
                }
                return ele;
            }
        */
    };

    int main() {
        Solution sol;

        vector<int> nums = {1, 2, 3, 4, 5, 5, 3};
        cout << sol.highestOccurringElement(nums);
    }