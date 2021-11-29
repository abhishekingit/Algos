public class arrayTrappingRain {
    static int waterLevel(int arr[], int n) {
        int leftTallest[] = new int[n];
        int rightTallest[] = new int[n];

        int levelWater = 0;
        leftTallest[0] = arr[0];
        for (int i = 1; i < n; i++) {
            leftTallest[i] = Math.max(leftTallest[i - 1], arr[i]);
        }

        rightTallest[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightTallest[i] = Math.max(rightTallest[i + 1], arr[i]);
        }

        for (int i = 0; i < n; i++) {
            levelWater += Math.min(leftTallest[i], rightTallest[i]) - arr[i];
        }
        return levelWater;

    }

    public static void main(String[] args) {
        int waterHeightMap[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
        System.out.println("maximum water that can be trapped is " + waterLevel(waterHeightMap, waterHeightMap.length));

    }
}
