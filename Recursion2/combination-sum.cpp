#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {  
            result.push_back(current);  // found a valid combination
            return;
        }
        if (target < 0) return; // no valid path

        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]);  
            // stay at i (not i+1) because we can reuse the same element
            backtrack(candidates, target - candidates[i], i, current, result);  
            current.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(candidates, target, 0, current, result);
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    
    vector<vector<int>> ans = sol.combinationSum(arr, target);

    cout << "Combinations are:\n";
    for (auto &comb : ans) {
        cout << "[ ";
        for (int num : comb) cout << num << " ";
        cout << "]\n";
    }
}
