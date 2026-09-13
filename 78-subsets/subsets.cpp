class Solution {
public:
    
    void findSS(int i, vector<int> nums,vector <int> &subset, vector<vector<int>> &ans){
        if ( i == nums.size()){
            ans.push_back(subset);
            return;
         }
        subset.push_back(nums[i]);
        findSS (i+1, nums, subset, ans);
        subset.pop_back();
        findSS(i+1, nums,subset,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        findSS(0, nums, subset, ans);
        return ans;
    }
};