import java.util.Arrays;

public class arrayMinHeights2 {
    public static int getMinDiff(int[] arr, int n, int k) {
        Arrays.sort(arr);
        int result = arr[n - 1] - arr[0];
        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;
        int TowerSmallest, TowerLargest;
        for (int i = 0; i < n - 1; i++) {
            TowerSmallest = Math.min(smallest, arr[i + 1] - k);
            TowerLargest = Math.max(largest, arr[i] + k);
            if (TowerSmallest < 0)
                continue;
            result = Math.min(result, TowerLargest - TowerSmallest);
        }
        return result;
    }

    public static void main(String[] args) {
        int[] numbers = { 1, 5, 8, 10 };
        int ans = getMinDiff(numbers, numbers.length, 2);
        System.out.println("The min difference between the largest and the smallest is " + ans);

    }

}
