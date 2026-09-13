class Solution {
public:

    vector <int> path;
    vector <vector <int>> ans;

    void solve(int start, int k, int n){
        if (k ==0 && n ==0) {
            ans.push_back(path);
            return;
        }

        if (k ==0 || n ==0) return;

        for (int i =start;i<=9; i++){
            path.push_back(i);
            solve (i+1, k-1,n-i);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        ans.clear();
        path.clear();

        solve(1,k,n);

        return ans;
    }
};