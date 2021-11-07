public class search2DMatrix {
    static boolean binarySeachRow(int arr[], int K) {
        int low = 0;
        int high = arr.length - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == K)
                return true;
            if (arr[mid] < K)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }

    public static boolean searchMatrix(int matrix[][], int target) {
        int low = 0;
        int high = matrix.length - 1;
        int N = matrix[0].length - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (target >= matrix[mid][0] && target <= matrix[mid][N - 1])
                return binarySeachRow(matrix[mid], target);
            if (target < matrix[mid][0])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
    }

    public static void main(String[] args) {
        int mat[][] = { { 1, 3, 5, 7 }, { 10, 11, 16, 20 }, { 23, 30, 34, 60 } };
        int targ = 1;
        if (searchMatrix(mat, targ))
            System.out.println("Element found");
        else
            System.out.println("Element not found");

    }

}
