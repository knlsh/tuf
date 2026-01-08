// 2155. All Divisions With the Highest Score of a Binary Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    // bruteforce
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        int maxScore = INT_MIN;
        vector<int> res;

        for (int i=0; i<=n; i++) {
            int count1s = 0;
            int count0s = 0;

            // loop to count 0s from left
            for (int j=0; j<i; ++j) {
                if (nums[j] == 0) {
                    count0s++;
                }
            }

            // loop to count 1s from right
            for (int j=i; j<n; ++j) {
                if (nums[j] == 1) {
                    count1s++;
                }
            }

            // calculate division score and compare with max
            int score = count0s + count1s;
            // cout << "0: " << count0s << " 1: " << count1s << endl;
            // cout << "divScore: " << divScore << " maxResult: " << maxResult << endl;
            if (score > maxScore) {
                maxScore = score;
                res.clear();
                res.push_back(i);
            } else if (score == maxScore) {
                res.push_back(i);
            }
        }
        return res;
    }
};

int main() {
    Solution s1;
    vector<int> nums = {0, 0, 1, 0};
    vector<int> ans = s1.maxScoreIndices(nums);
    for (int x: ans) {
        cout << x << " ";
    }
}