#include <bits/stdc++.h>
using namespace std;


struct Puzzle {
    int board[3][3];
    int x, y;
    int moves;
    int parent;
    bool isSolved()
    {
        int goal[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != goal[i][j])
                    return false;
            }
        }
        return true;
    }
    void print() {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == 0)
                    cout << "  ";
                else
                    cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    string toString()
    {
        string s = "";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                s += to_string(board[i][j]);
            }
        }
        return s;
    }
};

std::vector<Puzzle> allStates;

void printPath(int index)
{
    if (index == -1)
        return;
    printPath(allStates[index].parent);
    cout << "Step " << allStates[index].moves << ":\n";
    allStates[index].print();
}

void solve()
{
    Puzzle start;
    int inital[3][3] = {{1, 2, 3}, {4, 0, 5}, {6, 7, 8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            start.board[i][j] = inital[i][j];
            if (inital[i][j] == 0)
            {
                start.x = i;
                start.y = j;
            }
        }
    }
    start.moves = 0;
    start.parent = -1;
    cout << "Starting puzzle:\n";
    start.print();
    if (start.isSolved())
    {
        cout << "Already solved!\n";
        return;
    }
    queue<int> q;
    set<string> visited;
    allStates.push_back(start);
    q.push(0);
    visited.insert(start.toString());
    int dx[] = { -1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    while (!q.empty())
    {
        int currentIndex = q.front();
        q.pop();
        Puzzle current = allStates[currentIndex];
        for (int i = 0; i < 4; i++)
        {
            int newX = current.x + dx[i];
            int newY = current.y + dy[i];
            if (newX >= 0 && newX < 3 && newY >= 0 && newY < 3)
            {
                Puzzle next = current;
                swap(next.board[current.x][current.y], next.board[newX][newY]);
                next.x = newX;
                next.y = newY;
                next.moves = current.moves + 1;
                next.parent = currentIndex;
                string state = next.toString();
                if (visited.find(state) == visited.end())
                {
                    visited.insert(state);
                    int nextIndex = allStates.size();
                    allStates.push_back(next);
                    if (next.isSolved())
                    {
                        cout << "Solved in " << next.moves << " moves!\n";
                        cout << "=================================\n";
                        printPath(nextIndex);
                        return;
                    }
                    q.push(nextIndex);
                }
            }
        }
    }
    cout << "No solution found!\n";
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}