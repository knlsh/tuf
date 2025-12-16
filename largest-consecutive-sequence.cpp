#include<bits/stdc++.h>

using namespace std;

/* bool linearSearch(vector<int> arr, int num) {
    int size = arr.size();
    for (int i=0; i<size; i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

int longestConsecutive(vector<int> arr, int size) {
    int longest = 1;
    
    for (int i=0; i<size; i++) {
        int count = 1;
        int x = arr[i];
        cout << "arr[i]: " << arr[i] << endl;   
        while (linearSearch(arr, x+1) == true) {
            count = count+1;
            x = x+1;
        }
        longest = max(longest, count);
    }
    return longest;
} */
/* better solution

int longestConsecutive(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int longest = 1;
    int count = 0;
    int lastSmaller = INT_MIN; // assign the smallest element

    for (int i=0; i<arr.size(); i++) {
        if (arr[i]-1 == lastSmaller) {
            count += 1;
            lastSmaller = arr[i];
        } else if (arr[i] != lastSmaller) {
            count = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, count);
    }

    return longest;
}
*/

// optimal solution 
int longestConsecutive(vector<int> arr) {
    int n = arr.size(); 
    if (n == 0) return 0;

    int longest = 1;

    unordered_set<int> st;
    for (int i=0; i<n; i++) {
        st.insert(arr[i]);
    }

    for (auto itr: st) {
        if (st.find(itr-1) == st.end()) {
            int count = 1;
            int x = itr;
            while(st.find(x+1) != st.end()) {
                count += 1;
                x += 1;
            }

            longest = max(longest, count);
        }
    }

    return longest;
}


int main() {
    vector<int> arr = {1, 9, 3, 10, 4, 20, 2}; // [1, 2, 3, 4, 100, 200
    cout << longestConsecutive(arr);
    return 0;
}