class Solution {
public:
    vector <vector<int>> ans;
    void solve(vector <int> &candidates, int target, int index, vector <int> &path){
        if (target ==0){
            ans.push_back(path);
            return;
        }

        for (int i = index; i< candidates.size(); i++){
            if (i>index && candidates[i]== candidates[i-1]){
                continue;
            }
               
            if (candidates[i]> target)
                break;

            path.push_back(candidates[i]);
            solve(candidates, target - candidates[i], i+1, path);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort( candidates.begin(),candidates.end());

        vector<int>path;
        ans.clear();
        solve(candidates,target,0,path);

        return ans;

    }
};