#include<bits/stdc++.h>

using namespace std;

/* int calc (int arr[], int size) {
    int visitor[10000 + 1] = {0};
    int maxCnt = -1;
    int ele = -1;

    for (int i=0; i<size; i++) {
        int count = 0;
        if (visitor[arr[i]] == 0) {
            for (int j=i; j<size; j++) {
                // cout << "arr[i]: " << arr[i] << " arr[j]: " << arr[j] << endl;
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            if (maxCnt < count) {
                // cout << "maxCnt: " << maxCnt << endl;
                maxCnt = count;
                ele = arr[i];
            } else if (maxCnt == count && arr[i] < ele) {
                ele = arr[i];
            }
            visitor[arr[i]] = 1;
        }
    }
    return ele;
}

*/

int calc(int arr[], int size) {
    int maxNum = arr[0];

    for (int i=1; i<size; i++) {
        maxNum = max(maxNum, arr[i]);
    }

    int hash[maxNum];
    for (int i=0; i<maxNum; i++) { // initialize 0 using a loop because declaring the array with `int hash[maxNum] = {0}` gives error for this specific compiler
        hash[i] = 0;
    }

    for (int i=0; i<size; i++) {
        hash[arr[i]]++;
    }

    int maxCnt = 0; int ele = -1;
    for (int i=0; i<maxNum; i++) {
        if (maxCnt < hash[i]) {
            maxCnt = hash[i];
            ele = i+1; // increment the element because we are storing the counter in hash array which is 0 based index.
        }
    }
    return ele;
}

int main() {
    int arr[] = {1, 2, 3, 3, 2, 3, 2, 3, 2, 3};
    cout << calc(arr, 10);
    return 0;
}