public class bitManipulationOddEven {
    public static boolean isEven(int n) {
        if ((n & 1) == 0)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        int number = 0;
        System.out.println("The number " + number + " is " + (isEven(number) ? "Even" : "Odd"));
    }
}