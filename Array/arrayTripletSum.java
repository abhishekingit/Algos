import java.util.HashSet;

public class arrayTripletSum {
    static boolean tripletExist(int arr[], int n, int sum) {
        for (int i = 0; i < n - 2; i++) {
            HashSet<Integer> hset = new HashSet<Integer>();
            int currentSum = sum - arr[i];
            for (int j = i + 1; i < n; j++) {
                if (hset.contains(currentSum - arr[j])) {
                    System.out.println("The triplet found " + arr[i] + " " + arr[j] + " " + (currentSum - arr[j])
                            + " with sum " + sum);
                    return true;
                }
                hset.add(arr[j]);
            }

        }
        return false;

    }

    public static void main(String[] args) {
        int numbers[] = { 1, 4, 45, 6, 10, 8 };
        System.out.println(tripletExist(numbers, numbers.length, 22));

    }

}
