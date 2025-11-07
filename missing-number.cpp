#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            // Optimal 1 approach using arithmetic operation
            int N = nums.size();

            // Sum of all N natural numbers
            int sum1 = (N * (N + 1)) / 2;

            int sum2 = 0;

            // Sum of all elements in nums
            for (int x : nums) {
                sum2 += x;
            }

            return sum1 - sum2;
            
            /* Brute force approach

            int N = nums.size();

            for (int i=0; i<=N; i++) {
                int flag = 0;
                for (int j=0; j<N; j++) {
                    if (nums[j] == i) {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0) return i;
            }

            return -1;
        } */ 


        /* int missingNumber(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int i = 0;
            for(i=0; i<nums.size(); i++) {
                if (i != nums[i]) {
                    return i;
                }
            }

            if (nums[nums.size()-1] != i) {
                return i;
            }

            return 0; */
        } 
};


int main() {
    Solution sol;
    vector<int> nums = {0, 1, 2, 3, 4, 5};
    cout << sol.missingNumber(nums);
}