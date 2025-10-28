#include<iostream>

using namespace std;

/* 
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
}; */

class Solution{	
	public:		
		bool palindromeCheck(string& s) {
			//your code goes here
            return isPalindrome(s, 0, s.length()-1);
		}

        bool isPalindrome(string& s, int left, int right) {
            if (left >= right) {
                return true;
            }

            if (s[left] != s[right]) {
                return false;
            }

            return isPalindrome(s, left + 1, right - 1);
        }
};

int main() {
    Solution sol;
    string s = "anna";
    cout << sol.palindromeCheck(s);
}