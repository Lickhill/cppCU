#include <iostream>
#include <vector>

class Solution {
public:
    void solveSudoku(std::vector<std::vector<char>>& board) {
        solve(board);
    }

private:
    bool solve(std::vector<std::vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') {
                    for (char ch = '1'; ch <= '9'; ch++) {
                        if (isValid(board, row, col, ch)) {
                            board[row][col] = ch;
                            if (solve(board)) {
                                return true;
                            }
                            board[row][col] = '.'; // backtracking
                        }
                    }
                    return false; // if no valid number is found, return false
                }
            }
        }
        return true; // if all cells are filled correctly, return true
    }

    bool isValid(std::vector<std::vector<char>>& board, int row, int col, char num) {
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == num || board[row][i] == num) {
                return false;
            }
        }

        int mainBoxRow = (row / 3) * 3;
        int mainBoxCol = (col / 3) * 3;
        for (int i = mainBoxRow; i < mainBoxRow + 3; i++) {
            for (int j = mainBoxCol; j < mainBoxCol + 3; j++) {
                if (board[i][j] == num) {
                    return false;
                }
            }
        }

        return true;
    }
};

int main() {
    std::vector<std::vector<char>> board = {
        { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
        { '6', '.', '.', '1', '9', '5', '.', '.', '.' },
        { '.', '9', '8', '.', '.', '.', '.', '6', '.' },
        { '8', '.', '.', '.', '6', '.', '.', '.', '3' },
        { '4', '.', '.', '8', '.', '3', '.', '.', '1' },
        { '7', '.', '.', '.', '2', '.', '.', '.', '6' },
        { '.', '6', '.', '.', '.', '.', '2', '8', '.' },
        { '.', '.', '.', '4', '1', '9', '.', '.', '5' },
        { '.', '.', '.', '.', '8', '.', '.', '7', '9' }
    };

    Solution solution;
    solution.solveSudoku(board);

    // Print the solved Sudoku board
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}