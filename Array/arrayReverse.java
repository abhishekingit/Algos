public class arrayReverse {
    static void reverseArray(int arr[], int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    static void displayArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String args[]) {
        int numbers[] = { 1, 2, 3, 4, 5, 6 };
        int size = numbers.length;
        displayArray(numbers, size);
        reverseArray(numbers, 0, size - 1);
        displayArray(numbers, size);
    }

}
