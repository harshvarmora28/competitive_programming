// Author: Harsh Varmora
// Purpose: Solving n queen problem using backtracking approach
// Date: 3 May,2022

// Theory: n * n matrix is given, our aim is to place n queens such that they all don't attack each other
// - there are 8 directions (4 diagonals, 2 rows, 2 cols) in total in which a queen can attack other queen
// - each row has one queen
// - each col has one queen
// - in matrix queens are denoted by "1" and empty spaces are denoted by "0"

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<vector<int>> &board, int n){
    // Here we will check that is it possible to place the queen at given position safely or not,
    // if yes the return true else return false
    // We are not required to check to attacks in same column because we are always placing one queen in each column,
    // so we are only required to check for same rows or diagonals
    // Also, we are filling the matrix from left to right, so no need to check for attacks in right side of the matrix, 
    // because we haven't still filled values in them
    // Thus, we are only required to check the 3 possible attacks (left row, upper-left diagonal, lower-left diagonal)

    // Check for same row
    int x = row, y = col;
    // Start from last col and go towards first col in a row
    while(y >= 0){
        // If queen is present in the same row then return false
        if(board[x][y] == 1)
            return false;
        y--;
    }
    
    // Check for upper-left diagonal
    x = row, y = col;
    // Start from last row and last col and decrement both inorder to move upwards-left diagonally
    while(x >= 0 && y >= 0){
        // If queen is present in the same upper-left diagonal then return false
        if(board[x][y] == 1)
            return false;
        x--, y--;
    }

    // Check for lower-left diagonal
    x = row, y = col;
    // Here row will increment and col will decrement inorder to move lower-left diagonally
    while(x < n && y >= 0){
        // If queen is present in the same lower-left diagonal then return false
        if(board[x][y] == 1)
            return false;
        x++, y--;
    }

    // If we are able to reach till here, means queens are not under attack, hence return true
    return true;
}

void printSolution(vector<vector<int>> &ans, vector<vector<int>> &board, int n){

    // Traverse whole board matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 1)
                cout<<"Q"<<" ";
            else
                cout<<"-"<<" ";
        }
        cout<<endl;
    }
}

void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n){
    // Base case: terminate when all columns are filled
    if(col == n){
        // Print the partition between each solution 
        cout<<endl;
        for(int i = 0; i < n; i++)
            cout<<"^-^";
        cout<<endl;
        cout<<endl;
        // Print the ans
        printSolution(ans, board, n);
        return;
    }
    // Place one queen correctly, rest all queens will be placed correctly by recursion
    for(int row = 0; row < n; row++){
        if(isSafe(row, col, board, n)){
            // if Placing queen is possible, then place the queen in the board at that particular position
            board[row][col] = 1;
            // Check for next column
            solve(col + 1, ans, board, n);

            // Backtrack(remove) the previous queen if it is not possible to place queen, and try for next position
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> nQueens(int n){
    // Create chess board
    vector<vector<int>> board(n, vector<int>(n, 0));
    // Create ans vector to store ans in future
    vector<vector<int>> ans;

    solve(0, ans, board, n);

    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of matrix: ";
    cin>>n;
    nQueens(n);

    return 0;
}