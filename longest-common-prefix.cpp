#include <bits/stdc++.h>

using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			//your code goes here   
            int l = str.size();
            string lcpValue = "";
            sort(str.begin(), str.end());

            string smallest = str[0];
            string largest = str[l-1];
            int minVal = min(smallest.length(), largest.length());

            for (int i=0; i<minVal; i++) {
                if (smallest[i] != largest[i]) {
                    break;
                }
                lcpValue += smallest[i];
            }

            return lcpValue;
		}
};

int main() {
    Solution sol;
    vector<string> str = {"flow", "flowers", "flowing", "flob"};
    cout << sol.longestCommonPrefix(str);
}