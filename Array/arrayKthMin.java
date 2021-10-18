import java.util.Random;

public class arrayKthMin {

    static void swap(int arr[], int l, int r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }

    static int partition(int arr[], int l, int r) {
        int pivot = arr[r];
        int i = l;
        for (int j = l; j <= r - 1; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, l, r);
        return i;
    }

    static int randomPivot(int arr[], int l, int r) {
        int range = r - l + 1;
        Random randomNo = new Random();
        int pivot = randomNo.nextInt(range);
        swap(arr, l + pivot, r);
        return partition(arr, l, r);

    }

    static int kthMin(int arr[], int l, int r, int k) {
        if (k > 0 && k <= r - l + 1) {
            int pivPos = randomPivot(arr, l, r);

            if (pivPos - l == k - 1)
                return arr[pivPos];
            if (pivPos - l > k - 1)
                return kthMin(arr, l, pivPos - 1, k);
            return kthMin(arr, pivPos + 1, r, k - pivPos + l - 1);
        }
        return Integer.MAX_VALUE;
    }

    public static void main(String args[]) {
        int numbers[] = { 1, 4, 3, 2, 6, 5 };
        int size = numbers.length;
        int KthSmall = kthMin(numbers, 0, size - 1, 5);
        System.out.println("The kth smallest element in the array is " + KthSmall);
    }

}
