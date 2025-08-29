#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int res[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2)
            {
                res[i][j] = !res[i][j];
                if (j < 2)
                    res[i][j + 1] = !res[i][j + 1];
                if (i < 2)
                    res[i + 1][j] = !res[i + 1][j];
                if (i > 0)
                    res[i - 1][j] = !res[i - 1][j];
                if (j > 0)
                    res[i][j - 1] = !res[i][j - 1];

            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << res[i][j];
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
