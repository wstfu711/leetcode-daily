class Solution {
public:
    vector<vector<int>> ans;

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> v;
        backtrack(candidates, target, 0, v);
        return ans;
    }

    void backtrack(vector<int>& candidates, int target, int j, vector<int>& v){
        if(target == 0){
            ans.push_back(v);
            return;
        }
        for (int i = j; i < candidates.size(); ++i) {
            if (i > j && candidates[i] == candidates[i - 1]) {
                continue;
            }
            if (candidates[i] > target) {
                break;
            }
            v.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i + 1, v);
            v.pop_back();
        }
    }
};
