#include<iostream>

using namespace std;

class Solution{	
	public:
        void reverse(vector<int>& nums, int left, int right) {
            // base case
            if (left >= right) {
                return;
            }

            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            reverse(nums, left+1, right-1);
        }

		vector<int> reverseArray(vector<int>& nums){			
			//your code goes here
            reverse(nums, 0, nums.size()-1);
            return nums;
            
		}
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 3};
    sol.reverseArray(nums);

    for(int x : nums) {
        cout << x << " ";
    }
}