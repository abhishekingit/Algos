
/*
Given a matrix of size r*c. Traverse the matrix in spiral form. 
*/
import java.util.*;

public class spiralTraverseMatrix {
    static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c) {
        // code here
        ArrayList<Integer> arrList = new ArrayList<Integer>();
        int row = 0;
        int col = 0;

        while (row < r && col < c) {
            // storing the elements of 1st row from the remaining rows, in a list.
            for (int i = col; i < c; i++)
                arrList.add(matrix[row][i]);
            row++;

            // storing elements of last column from remaining columns, in list.
            for (int i = row; i < r; i++)
                arrList.add(matrix[i][c - 1]);
            c--;

            // storing the elements of last row from remaining rows, in a list.
            if (row < r) {
                for (int i = c - 1; i >= col; --i)
                    arrList.add(matrix[r - 1][i]);
                r--;
            }

            // storing elements of 1st column from the remaining columns, in list.
            if (col < c) {
                for (int i = r - 1; i >= row; --i)
                    arrList.add(matrix[i][col]);
                col++;
            }
        }
        // returning the list.
        return arrList;
    }

    public static void main(String[] args) {
        int mat[][] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
        int rlen = mat.length;
        int clen = mat[0].length;
        ArrayList<Integer> result = spirallyTraverse(mat, rlen, clen);
        for (Integer x : result) {
            System.out.print(x + " ");
        }

    }
}