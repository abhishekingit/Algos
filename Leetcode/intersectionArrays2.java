
/*
Intersection of Arrays 2
*/
import java.util.*;

public class intersectionArrays2 {
    public static int[] listToArray(ArrayList<Integer> alist) {
        int arr[] = new int[alist.size()];
        for (int i = 0; i < alist.size(); i++) {
            arr[i] = alist.get(i);
        }
        return arr;
    }

    public static int[] intersect(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> hmap = new HashMap<>();
        ArrayList<Integer> arrList = new ArrayList<Integer>();

        if (nums1.length == 0 || nums2.length == 0)
            return new int[0];

        for (int x : nums1) {
            if (hmap.containsKey(x)) {
                hmap.put(x, hmap.get(x) + 1);
            } else {
                hmap.put(x, 1);
            }

        }

        for (int el : nums2) {
            if (hmap.containsKey(el) && hmap.get(el) > 0) {
                arrList.add(el);
                int freq = hmap.get(el);
                freq--;
                hmap.put(el, freq);
            }
        }
        return listToArray(arrList);

    }

    public static void main(String[] args) {
        int numbers1[] = { 4, 9, 5, 4, 9 };
        int numbers2[] = { 9, 4, 9, 8, 4 };
        int[] result = intersect(numbers1, numbers2);
        for (int x : result) {
            System.out.print(x + " ");
        }
    }

}
