class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int best = nums[0];
        int worst = nums[0];
        int ans = abs(nums[0]);

        for (int i=1; i<nums.size();i++){
            int a = nums[i] + best;
            int b = nums[i] ;
            int c = nums[i] + worst;

            best = max(a, max(b,c));
            worst = min(a, min(b,c));

            ans = max(ans, max(best, abs(worst)));
        }
        return ans;
    }
};