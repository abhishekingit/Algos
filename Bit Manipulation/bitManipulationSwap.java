public class bitManipulationSwap {
    public static void swap(int a, int b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        System.out.println("The num1 after swap is " + a + " and num2 is " + b);
    }

    public static void main(String[] args) {
        int num1 = 10, num2 = 8;
        swap(num1, num2);
    }

}
