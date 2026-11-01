class Solution {
    public int maxProduct(int[] nums) {
        int max = 1;
        int ans = Integer.MIN_VALUE;

        // Left to right
        for(int i = 0; i < nums.length; i++) {
            max = max * nums[i];

            if(max > ans) {
                ans = max;
            }

            if(max == 0) {
                max = 1;
            }
        }

        max = 1;

        // Right to left
        for(int i = nums.length - 1; i >= 0; i--) {
            max = max * nums[i];

            if(max > ans) {
                ans = max;
            }

            if(max == 0) {
                max = 1;
            }
        }

        return ans;
    }
}