
/* PS
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
import java.util.Arrays;

public class containsDuplicate {
    static boolean haveDuplicates(int nums[]) {
        if (nums == null || nums.length == 0)
            return false;
        Arrays.sort(nums);
        for (int i = 1; i < nums.length; i++) {
            if (nums[i - 1] == nums[i]) {
                return true;
            }
        }
        return false;
    }

    public static void main(String args[]) {
        int numbers[] = { 1, 2, 3, 1 };
        boolean isDup = haveDuplicates(numbers);
        System.out.println(isDup);
    }
}