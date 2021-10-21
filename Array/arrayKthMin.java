import java.util.*;

public class arrayKthMin {
    static int kthSmallest(int arr[], int k) {
        PriorityQueue<Integer> maxQ = new PriorityQueue<Integer>(Collections.reverseOrder());
        for (int el : arr) {
            maxQ.add(el);
            if (maxQ.size() > k) {
                maxQ.poll();
            }
        }
        return maxQ.poll();
    }

    public static void main(String[] args) {
        int numbers[] = { 7, 10, 4, 3, 20, 15 };
        int KthsmallestNumber = kthSmallest(numbers, 3);
        System.out.println("kth smallest number is " + KthsmallestNumber);
    }
}