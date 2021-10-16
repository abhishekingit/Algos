#include <stdio.h>
#include <stdlib.h>

void print_sol(int n, int** board) {
    static int k = 1;
    printf("Solution %d\n", k++);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            printf("%d ", board[i][j]);
        printf("\n");
    }
    printf("\n");
}

int is_safe(int n, int** board, int row, int col) {
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return 0;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return 0;
    for (int i = row, j = col; j >= 0 && i < n; i++, j--)
        if (board[i][j])
            return 0;
    return 1;
}

int n_queens(int n, int** board, int col) {
    if (col == n) {
        print_sol(n, board);
        return 1;
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (is_safe(n, board, i, col)) {
            board[i][col] = 1;
            res |= n_queens(n, board, col+1);
            board[i][col] = 0;
        }
    }

    return res;
}

int main() {
    int n;
    printf("Enter the side of the board: ");
    scanf("%d", &n);

    int** board = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        board[i] = malloc(n * sizeof(int));
    }

    if (!n_queens(n, board, 0))
        printf("Solution does not exist\n");
}