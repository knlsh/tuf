#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /* 
        TLE
        Time complexity: 0(n*m): Because we are using `find` function in the loop. 

        int cnt = 0;
        vector<int> result;

        for (int i=0; i<nums.size(); i++) {
            if (find(result.begin(), result.end(), nums[i]) == result.end()) {
                result.push_back(nums[i]);
                cnt++;
            }
        }

        for (int i=0; i<result.size(); i++) {
            nums[i] = result[i];
        }

        return cnt; */

        // create set to store unique elements
        set<int> s;

        // add values to set
        for (int val : nums) {
            s.insert(val);
        }

        // size of unique elements of set
        int k = s.size();

        int j = 0;

        // Insert values back to vector
        for (int val : s) {
            nums[j++] = val;
        }

        return k;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 0, 2, 3, 3, 4, 5, 9};
    sol.removeDuplicates(nums);
    for (int x : nums) {
        cout << x << ", ";
    }
}