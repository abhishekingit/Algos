/*
Reorder an array according to given indexes
*/

import java.util.*;

public class reorderArrayIndex {
    public static void reorder(int[] arr, int[] index) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            map.put(index[i], arr[i]);
        }
        for (int i = 0; i < arr.length; i++) {
            arr[i] = map.get(i);
        }
    }

    public static void main(String args[]) {
        int numbers[] = { 10, 11, 12 };
        int indexes[] = { 1, 0, 2 };
        reorder(numbers, indexes);
        for (int x : numbers) {
            System.out.print(x + " ");
        }
    }

}
