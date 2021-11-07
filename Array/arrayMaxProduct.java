public class arrayMaxProduct {

    static long maxProduct(int[] arr, int n) {
        long maxVal = arr[0];
        long minVal = arr[0];
        long maxProd = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] < 0) {
                long temp = maxVal;
                maxVal = minVal;
                minVal = temp;
            }

            maxVal = Math.max(arr[i], maxVal * arr[i]);
            minVal = Math.min(arr[i], minVal * arr[i]);
            maxProd = Math.max(maxProd, maxVal);
        }
        return maxProd;
    }

    public static void main(String[] args) {
        int numbers[] = { 2, 3, 4, 5, -1, 0 };
        long prod = maxProduct(numbers, numbers.length);
        System.out.println(prod);

    }

}
