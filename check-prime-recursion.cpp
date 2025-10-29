#include<iostream>

using namespace std;

class Solution{	
	public:
		bool checkPrime(int num){
            // prime number cannot be less than or equal to 1

            if (num <= 1) return false;
			//your code goes here
            return isPrime(num, 2);
		}

        bool isPrime(int num, int i) {
            // base condition
            if (i > sqrt(num)) {
                return true;
            }

            if (num % i == 0) {
                return false;
            }

            return isPrime(num, i+1);
        }
};

int main() {
    Solution sol;
    cout << sol.checkPrime(11);
}