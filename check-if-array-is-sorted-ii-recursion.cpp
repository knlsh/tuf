#include<bits/stdc++.h>

using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            return sort(nums, 0, 1);
		}

        bool sort(vector<int> nums, int left, int right) {
            if (right > nums.size()-1) {
                return true;
            }

            if (nums[left] > nums[right]) {
                return false;
            }

            return sort(nums, left+1, right+1);
        }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    cout << sol.isSorted(nums);
}