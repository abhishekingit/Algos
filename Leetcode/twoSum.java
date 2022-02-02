import java.util.Hashtable;

public class twoSum {
    public static int[] TwoSUM(int[] nums, int target) {
        Hashtable<Integer, Integer> ht = new Hashtable<>();
        for (int i = 0; i < nums.length; i++) {
            int complementNumber = target - nums[i];
            if (ht.containsKey(complementNumber)) {
                return new int[] { ht.get(complementNumber), i };
            } else {
                ht.put(nums[i], i);
            }
        }
        return new int[] {};
    }

    public static void main(String[] args) {
        int[] numbers = { 3, 2, 4 };
        int target = 6;
        int[] sumIndices = TwoSUM(numbers, target);
        System.out.println("Indices are " + sumIndices[0] + " and " + sumIndices[1]);

    }
}
