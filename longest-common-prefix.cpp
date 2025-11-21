#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        if (strs.size() == 0) return ans;

        int n = strs.size();
        sort(strs.begin(), strs.end());
        string shortest = strs[0];
        string longest = strs[n-1];
        
        for (int i=0; i<min(shortest.size(), longest.size()); i++) {
            if (shortest[i] != longest[i]) {
                return ans;
            }
            ans += shortest[i];
        }

        return ans;
    }
};
int main() {
    Solution sol;
    vector<string> str = {"flow", "flowers", "flowing", "flob"};
    cout << sol.longestCommonPrefix(str);
}