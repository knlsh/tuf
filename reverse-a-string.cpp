#include<bits/stdc++.h>

using namespace std;

class Solution{	

private:
    void reverse(vector<char>&s, int left, int right) {
        // base condition
        if (left >= right) {
            return;
        }

        // swap the values
        int temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        // recursion
        reverse(s, left+1, right-1);
    }

public:		
	vector<char> reverseString(vector<char>& s){
		//your code goes here
        int left = 0;
        int right = s.size()-1;
        reverse(s, left, right);
        return s;
	}
};

int main() {
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    sol.reverseString(s);
    for(char c : s) {
        cout << c << " ";
    }
}