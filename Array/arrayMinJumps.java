public class arrayMinJumps {
    public static int minJumps(int arr[]) {
        if (arr.length <= 1)
            return 0;
        if (arr[0] == 0)
            return -1;
        int maxReach = arr[0];
        int step = arr[0];
        int jumps = 1;
        for (int i = 1; i < arr.length; i++) {
            if (i == arr.length - 1)
                return jumps;
            maxReach = Math.max(maxReach, i + arr[i]);
            step--;
            if (step == 0) {
                jumps++;
                if (i >= maxReach)
                    return -1;
                step = maxReach - i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int numbers[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
        System.out.println(minJumps(numbers));

    }

}
