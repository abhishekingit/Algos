public class arrayRotateKtimes {
    static void rotateKtimes(int arr[], int N, int K) {
        K = K % N;
        for (int i = 0; i < N; i++) {
            if (i < K) {
                System.out.println(arr[N + i - K]);
            } else {
                System.out.println(arr[i - K]);
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };
        rotateKtimes(arr, arr.length, 2);

    }
}
