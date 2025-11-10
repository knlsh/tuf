#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i = 0; int j = 0; 

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums2[j] < nums1[i]) {
                j++;
            } else {
                result.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 2, 3};
    vector<int> nums2 = {2, 2, 3};
    vector<int> result = sol.intersectionArray(nums1, nums2);
    for (int x : result) {
        cout << x << ", ";
    }
}