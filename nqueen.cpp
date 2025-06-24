#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>&board , int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n--------------\n";
}



bool isSafe(vector<vector<int>>&board , int row , int col , int n)
{

    for (int i = 0; i < row; i++)
    {
        if (board[i][col])
            return false;
    }

    for (int i = row, j = col; i >= 0 & j >= 0; i-- , j--)
    {
        if (board[i][j])
            return false;
    }

    for (int i = row , j = col; i >= 0 & j < n ; i--, j++)
    {
        if (board[i][j])
            return false ;
    }
    return true;
}


bool solve(vector<vector<int>>&board , int row , int n)
{
    if (row >= n)
    {
        print(board , n);
        return true ;
    }

    bool res = false ;
    for (int i = 0; i < n; i++)
    {
        if (isSafe(board , row , i , n))
        {   board[row][i] = 1;
            res = solve(board , row + 1, n) || res;
            board[row][i] = 0;
        }
    }0

    return res;
}


int main()
{
    int n ;
    cin >> n;
    vector<vector<int>>board(n , vector<int>(n, 0));
    if (!solve(board, 0, n))

        return 0;
}