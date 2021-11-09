import java.util.HashSet;

public class arrayUnion {
    public static int unionArrays(int[] nums1, int[] nums2) {
        HashSet<Integer> hset = new HashSet<>();
        for (int x1 : nums1) {
            hset.add(x1);
        }
        for (int x2 : nums2) {
            hset.add(x2);
        }
        return hset.size();

    }

    public static void main(String[] args) {
        int[] numbers1 = { 1, 2, 3, 4, 5 };
        int[] numbers2 = { 1, 2, 3, 6 };
        int unionArrSize = unionArrays(numbers1, numbers2);
        System.out.println("The union size is " + unionArrSize);
    }
}
