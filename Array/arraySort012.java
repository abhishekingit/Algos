class arraySort012 {

    static void sort012(int arr[], int size) {
        int numofZeros = 0, numofOnes = 0, numofTwos = 0;
        for (int el : arr) {
            if (el == 0) {
                numofZeros++;
            } else if (el == 1) {
                numofOnes++;
            } else {
                numofTwos++;
            }
        }
        for (int i = 0; i < size; i++) {
            if (i < numofZeros) {
                arr[i] = 0;
            } else if (i < numofZeros + numofOnes) {
                arr[i] = 1;
            } else {
                arr[i] = 2;
            }
        }

    }

    public static void main(String args[]) {
        int numbers[] = { 0, 1, 2, 2, 1, 0, 2 };
        sort012(numbers, numbers.length);
        for (int x : numbers) {
            System.out.print(x + " ");
        }

    }

}