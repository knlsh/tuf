#include<bits/stdc++.h>

using namespace std;

class Solution{	
	public:
        int pos = 0;
		int arraySum(vector<int>& nums){
			//your code goes here
            return sum(nums, pos);
		}

        int sum(vector<int>& nums, int pos) {
            if (pos > nums.size()-1) {
                return 0;
            }
            return nums[pos] + sum(nums, pos + 1);
        }
};

int main() {
	Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
	cout << sol.arraySum(nums);
}