class Solution {
    public int countHillValley(int[] nums) {
        int sum = 0;
        int left = nums[0]; // Tracks the last distinct value on the left

        for (int i = 1; i < nums.length - 1; i++) {
            // If the next element is a duplicate, skip evaluating until the end of the plateau
            if (nums[i] == nums[i + 1]) {
                continue;
            }

            // Check if it's a hill
            if (left < nums[i] && nums[i] > nums[i + 1]) {
                sum++;
            } 
            // Check if it's a valley
            else if (left > nums[i] && nums[i] < nums[i + 1]) {
                sum++;
            }

            // Update the left boundary for the next iteration
            left = nums[i];
        }
        
        return sum;
    }
}

