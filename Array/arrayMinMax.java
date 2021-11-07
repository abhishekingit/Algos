public class arrayMinMax {
    static class Pair {
        int min;
        int max;
    }

    static Pair MinMax(int arr[], int size) {
        Pair p1 = new Pair();
        if (size == 1) {
            p1.max = arr[0];
            p1.min = arr[0];
        }

        if (arr[0] < arr[1]) {
            p1.max = arr[1];
            p1.min = arr[0];
        } else {
            p1.max = arr[0];
            p1.min = arr[1];
        }

        for (int i = 2; i < size; i++) {
            if (arr[i] < p1.min)
                p1.min = arr[i];
            else if (arr[i] > p1.max)
                p1.max = arr[i];
        }

        return p1;
    }

    public static void main(String args[]) {
        int numbers[] = { 1, 4, 4, 2, 6, 5 };
        Pair p = MinMax(numbers, numbers.length - 1);
        System.out.println(
                "The max element in this array is " + p.max + " and the min element in this array is " + p.min);

    }

}
