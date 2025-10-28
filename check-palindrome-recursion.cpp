#include<iostream>

using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            int left = 0;
            int right = s.length()-1;
            string ans = s;
            palCheck(s, left, right);

            // if the string is palindrome
            if(s == ans) {
                return true;
            }

            // if the string is not palindrome
            return false;
		}

        void palCheck(string& s, int left, int right) {
            if (left >= right) {
                return;
            }

            int temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            palCheck(s, left+1, right-1);
        }
};

int main() {
    Solution sol;
    string s = "nasjdsjs";
    cout << sol.palindromeCheck(s);
}