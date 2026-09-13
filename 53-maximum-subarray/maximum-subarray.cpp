class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = nums[0];
        int ans = nums [0];
        for (int i =1; i <nums.size(); i++){
            int a = nums[i]+best;
            int b = nums[i];
            best = max(a,b);
            ans = max(ans,best);
        }
        return ans;
    }
};