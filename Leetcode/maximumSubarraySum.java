/*
Kadane's algo
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/

public class maximumSubarraySum {
    static int maxSubArray(int[] nums) {
        int maxSum = nums[0];
        int maxEnd = nums[0];

        for (int i = 1; i < nums.length; i++) {
            maxEnd = Math.max(nums[i], maxEnd + nums[i]);
            maxSum = Math.max(maxSum, maxEnd);
        }
        return maxSum;
    }

    public static void main(String[] args) {
        int numbers[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
        int maxSubSum = maxSubArray(numbers);
        System.out.println(maxSubSum);
    }
}
