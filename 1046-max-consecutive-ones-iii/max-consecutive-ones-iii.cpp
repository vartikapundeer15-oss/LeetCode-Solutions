class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l =0;
        int ans =0;
        int flip = 0;
        for(int h = 0; h<nums.size();h++){
            if (nums[h]==0){
                flip ++;
            }
            while(flip >k){
                if (nums[l]==0){
                    flip --;
                }
                l++;
            }
            ans = max(ans, h-l +1);
        }
        return ans;
    }
};