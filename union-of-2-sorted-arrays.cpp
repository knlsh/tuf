#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> merged;
        vector<int> result;
        for (int i=0; i<nums1.size(); i++) {
            merged.insert(nums1[i]);
        }

        for (int i=0; i<nums2.size(); i++) {
            merged.insert(nums2[i]);
        }

        for (int s : merged) {
            result.push_back(s);
        }

        return result;

    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 3, 5, 2, 3, 6};
    vector<int> nums2 = {2, 4, 6};
    vector<int> nums3 = sol.unionArray(nums1, nums2);
    for (int x : nums3) {
        cout << x << ", ";
    }
}