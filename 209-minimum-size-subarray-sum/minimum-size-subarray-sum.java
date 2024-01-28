class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int ans = 1000000000, l = 0, r = 0;
        long sum = 0;

        while (l <= r && l < nums.length && r<nums.length) {
            sum += nums[r];
            r++;

            while (sum >= target) {
                ans = Math.min(ans, r - l);
                sum -= nums[l];
                l++;
            }
        }

        if (ans == 1000000000) {
            ans = 0;
        }

        return ans;
    }
}