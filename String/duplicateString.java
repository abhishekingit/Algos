import java.util.*;

public class duplicateString {
    public static void printDuplicateChars(String S) {
        HashMap<Character, Integer> map = new HashMap<>();
        for (int i = 0; i < S.length(); i++) {
            if (map.containsKey(S.charAt(i))) {
                map.put(S.charAt(i), map.get(S.charAt(i)) + 1);
            } else {
                map.put(S.charAt(i), 1);
            }
        }
        for (Map.Entry<Character, Integer> element : map.entrySet()) {
            int value = (int) element.getValue();
            if (value > 1) {
                System.out.print((char) element.getKey() + " ");
            }

        }
    }

    public static void main(String args[]) {
        String s1 = new String("TESTTHIS");
        printDuplicateChars(s1);

    }

}
