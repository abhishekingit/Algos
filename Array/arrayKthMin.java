
/*
Kth smallest number in an Array using Heap
*/
import java.util.*;

public class arrayKthMin {
    static int kthSmallest(int arr[], int k) {
        PriorityQueue<Integer> maxH = new PriorityQueue<Integer>(Collections.reverseOrder());
        for (int el : arr) {
            maxH.add(el);
            if (maxH.size() > k) {
                maxH.poll();
            }
        }
        return maxH.poll();
    }

    public static void main(String[] args) {
        int numbers[] = { 7, 10, 4, 3, 20, 15 };
        int KthsmallestNumber = kthSmallest(numbers, 3);
        System.out.println("kth smallest number is " + KthsmallestNumber);
    }
}