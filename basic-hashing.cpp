/*  Q: count the number of elements in array.
    If the array is [1, 2, 2, 3, 3, 3] => 1 occurs 1 time, 2 occurs 2 times and 3 occurs 3 times
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 3, 2, 5, 5};
    int maxVal = INT_MIN;
    int sizeOfArr = (sizeof(arr)/sizeof(arr[0]));
    int val = 0;


    // find the maximum value of the array
    // TC: O(N)
    for (int val : arr) {
        maxVal = max(maxVal, val);
    }

    // create the hash array with maxVal+1 size to store the counter of corresponding position
    vector<int> hashVal(maxVal+1, 0);

    // add the occurrence of value by incrementing hashmap 
    // TC: O(N)
    for (int i=0; i<sizeOfArr; i++) {
        hashVal[arr[i]]++;
    }

    cout << "Enter the value to search: ";
    cin >> val;
    cout << val << " occurs " << hashVal[val] << " times." << endl;
}

