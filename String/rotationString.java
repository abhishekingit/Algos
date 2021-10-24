public class rotationString {
    public static boolean isRotation(String s1, String s2) {
        String temp = s1 + s1;
        if (temp.contains(s2)) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        String s1 = "ABCD", s2 = "CDAB";
        if (isRotation(s1, s2)) {
            System.out.println("The strings are rotations!");
        } else {
            System.out.println("The strings are not rotations!");
        }
    }
}
