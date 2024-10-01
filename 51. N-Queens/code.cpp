#include <iostream>
#include <vector>

using namespace std;

void printBoard(const vector<vector<char>>& board) {
    int n = board.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "--------------------------" << endl;
}

bool isSafe(const vector<vector<char>>& board, int row, int col) {
    int n = board.size();

    // Horizontal check
    for (int j = 0; j < n; ++j) {
        if (board[row][j] == 'Q') {
            return false;
        }
    }

    // Vertical check
    for (int i = 0; i < row; ++i) {
        if (board[i][col] == 'Q') {
            return false;
        }
    }

    // Diagonal left-to-right check
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Diagonal right-to-left check
    for (int i = row, j = col; i >= 0 && j < n; --i, ++j) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void nQueens(vector<vector<char>>& board, int row) {
    int n = board.size();
    if (row == n) {
        printBoard(board);
        return;
    }

    for (int j = 0; j < n; ++j) {
        if (isSafe(board, row, j)) {
            board[row][j] = 'Q';
            nQueens(board, row + 1);
            board[row][j] = '.';
        }
    }
}

int main() {
    int n;
    cout << "Enter the board size: ";
    cin >> n;

    vector<vector<char>> board(n, vector<char>(n, '.'));
    nQueens(board, 0);

    return 0;
}