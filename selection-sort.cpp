#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {

        // outer loop
        for (int i=0; i<nums.size()-1; i++) {

            int minIndex = i;

            // inner loop traversing the array
            for (int j=i+1; j<nums.size(); j++) {
                if(nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }

            // if minIndex is not at the current location then update
            if (minIndex != i) {
                swap(nums[minIndex], nums[i]);
            }
        }
        return nums;
    }
};


int main() {
    Solution sol;
    vector<int> value = {10, 9, 3, 6, 6};
    sol.selectionSort(value);

    for(int x : value) {
        cout << x << ", ";
    }
}