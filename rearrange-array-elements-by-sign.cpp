#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> ans(nums.size(), 0);
        int posIndex = 0;
        int negIndex = 1;

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] < 0) {
                ans[negIndex] = nums[i];
                negIndex += 2;
            } else {
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }

        return ans;

        /* 
        
        Time Complexity:O(n) due to iterating through the input array 'nums' once to separate positive and negative numbers, and then iterating up to n/2 (size of positive array) to build the rearranged array, where n is the size of the input array 'nums'.
        Space Complexity:O(n) because the space used by 'positive', 'negative', and 'result' vectors scales linearly with the size of the input array 'nums'.
        
        vector<int> result;
        vector<int> positive;
        vector<int> negative;

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] < 0) {
                negative.push_back(nums[i]);
            } else {
                positive.push_back(nums[i]);
            }
        }

        for (int i=0; i<positive.size(); i++) {
            result.push_back(positive[i]);
            result.push_back(negative[i]);
        }

        return result;
        */
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, -1, -2, -3};
    vector<int> result = sol.rearrangeArray(nums);
    for (int x : result) {
        cout << x << ", ";
    }
}