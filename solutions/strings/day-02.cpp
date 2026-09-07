// Longest Substring Without Repeating Characters - Day 2
// Language: C++ (C++17)

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(const string &s) {
    vector<int> last(256, -1); // last seen index for each ASCII char
    int left = 0, best = 0;
    for (int right = 0; right < (int)s.size(); ++right) {
        unsigned char c = s[right];
        if (last[c] >= left) {
            left = last[c] + 1;
        }
        last[c] = right;
        best = max(best, right - left + 1);
    }
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if (!getline(cin, s)) return 0;
    cout << lengthOfLongestSubstring(s) << '\n';
    return 0;
}
