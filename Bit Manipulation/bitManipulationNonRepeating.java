public class bitManipulationNonRepeating {
    public static int isNonRepeating(int[] arr) {
        int res = 0;
        for (int x : arr) {
            res = res ^ x;
        }
        return res;
    }

    public static void main(String[] args) {
        int[] numbers = { 4, 2, 5, 3, 3, 2, 4 };
        int nonRepeating = isNonRepeating(numbers);
        System.out.println("The number " + nonRepeating + " is non repeating in this array");

    }

}
