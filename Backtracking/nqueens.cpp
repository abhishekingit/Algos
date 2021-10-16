#include <bits/stdc++.h>
#define N 4

using namespace std;

void displaySolution(int board[N][N]) {
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<N; j++) {
            cout<<board[i][j];
        }
        cout<<endl;

    }
    cout<<endl;
}

bool isAttacked(int board[N][N], int row, int col) {
    int i, j;

    for(i = 0; i<col; i++) {
        if(board[row][i]) {
            return false;
        }
    }

    for(i = row, j = col; i>=0 && j>=0; i--,j--) {
        if(board[i][j]) {
            return false;
        }
    }

    for(i = row, j = col; i<N && j>=0; i++, j--) {
        if(board[i][j]) {
            return false;

        }
    }

    return true;
}




bool Nqsolution(int board[N][N], int col) {

    if(col==N) {
        displaySolution(board);
        return true;
    }

    bool check = false;

    for(int i = 0; i<N; i++) {
        if(isAttacked(board, i, col)) {
            board[i][col] = 1;

            if(Nqsolution(board, col + 1)) {
                check = true;
            }

            board[i][col] = 0;
            

        }
    }

    return check;
}




void NqSolver() {

    int board[N][N];
    memset(board, 0, sizeof(board));

    if(Nqsolution(board, 0) == false) {
        cout<<"Solution does not exist"<<endl;
        return;
    }

    return;
}





int main() {
    
    NqSolver();
    return 0;

}