
/*
K Largest Numbers in the array using Heap
*/
import java.util.*;

public class arrayKLargest {
    public static Integer[] KLargest(int arr[], int k) {
        PriorityQueue<Integer> minH = new PriorityQueue<Integer>();
        for (int el : arr) {
            minH.add(el);
            if (minH.size() > k) {
                minH.poll();
            }
        }
        Integer[] arr1 = new Integer[k];
        Integer[] kLarge = minH.toArray(arr1);
        return kLarge;
    }

    public static void main(String[] args) {
        int numbers[] = { 7, 10, 4, 3, 20, 15 };
        Integer KLargeNumbers[] = KLargest(numbers, 3);
        for (int x : KLargeNumbers) {
            System.out.print(x + " ");
        }
    }
}
