public class palindromeString {
    public static int isPalindrome(String S) {
        int start = 0;
        int end = S.length() - 1;
        while (start < end) {
            if (S.charAt(start) != S.charAt(end)) {
                return 0;
            }
            start++;
            end--;
        }
        return 1;
    }

    public static void main(String args[]) {
        String s = new String("abv");
        int palindrome = isPalindrome(s);
        if (palindrome == 0)
            System.out.println("It is not a palindrome");
        else
            System.out.println("It is a palindrome");

    }
}