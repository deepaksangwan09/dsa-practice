// Two Sum - Day 1 solution
// Language: C++ (C++17)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<long long, int> idx;
    idx.reserve(nums.size()*2);
    for (int i = 0; i < (int)nums.size(); ++i) {
        long long need = (long long)target - nums[i];
        auto it = idx.find(need);
        if (it != idx.end()) {
            return {it->second, i};
        }
        idx[nums[i]] = i;
    }
    return {}; // Problem guarantees a solution; unreachable in valid inputs
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; long long target;
    if (!(cin >> n >> target)) return 0;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    auto res = twoSum(nums, (int)target);
    if (!res.empty()) {
        cout << res[0] << ' ' << res[1] << '\n';
    }
    return 0;
}
