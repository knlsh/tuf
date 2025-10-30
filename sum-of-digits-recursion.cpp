#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
	int addDigits(int num){
        int sum = 0;
		//your code goes here
        if(num / 10 == 0) {
            return num;
        }

        while(num != 0) {
            sum += num % 10;
            num = num / 10;
        }

        return addDigits(sum);
    }
};

int main() {
    Solution sol;
    cout << sol.addDigits(2423);
}