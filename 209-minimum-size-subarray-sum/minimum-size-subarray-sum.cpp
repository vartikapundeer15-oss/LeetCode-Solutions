class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int sum = 0;
        int size = INT_MAX;
        int n = nums.size();

        for (int h = 0; h < n; h++) {
            sum += nums[h];

            while (sum >= target) {
                size = min(size, h - l + 1);
                sum -= nums[l];
                l++;
            }
        }

        if (size == INT_MAX) return 0;
        return size;
    }
};