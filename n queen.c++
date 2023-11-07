#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<int>& queens, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (queens[i] == col || abs(queens[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

void printQueens(vector<int>& queens) {
    int N = queens.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (queens[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void solveNQueens(vector<int>& queens, int row, int N) {
    if (row == N) {
        // All queens are placed, print the solution
        printQueens(queens);
    } else {
        for (int col = 0; col < N; col++) {
            if (isSafe(queens, row, col)) {
                queens[row] = col;
                solveNQueens(queens, row + 1, N);
            }
        }
    }
}

int main() {
    int N;
    cout << "Enter the number of queens (N): ";
    cin >> N;
    
    vector<int> queens(N, -1); // Initialize the array to -1
    
    solveNQueens(queens, 0, N);
    
     return 0;
}