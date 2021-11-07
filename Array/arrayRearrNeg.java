import java.io.*;

public class arrayRearrNeg {

    static void rearrangeArray(int[] nums, int n) {
        int temp, j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                if (i != j) {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
                j++;
            }
        }
    }

    public static void main(String[] args) {
        int[] numbers = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
        rearrangeArray(numbers, numbers.length);
        for (int x : numbers) {
            System.out.print(x + " ");
        }

    }

}
