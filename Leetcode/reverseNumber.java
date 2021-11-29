public class reverseNumber {
    static int reverseOfNumber(int n) {
        int number = n, reverse = 0;
        while (number != 0) {
            int rem = number % 10;
            reverse = reverse * 10 + rem;
            number = number / 10;
        }
        return reverse;
    }

    public static void main(String[] args) {
        int num = 13589;
        System.out.println(reverseOfNumber(num));

    }

}
