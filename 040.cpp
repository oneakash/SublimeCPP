// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)

//---------------------------------------------------------------------------------------------------
#define yes "VALID"
#define no "INVALID"
string solve()
{
    int s[9][9];
    rep(i, 0, 9)
    {
        rep(j, 0, 9)
        {
            cin >> s[i][j];
        }
    }
    int sum = 0;
    rep(i, 0, 9)
    {
        sum = 0;
        int yog = 0;
        rep(j, 0, 9)
        {
            sum += s[i][j];
            yog += s[j][i];
        }
        if (sum != 45 || yog != 45)
            return no;
    }
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            int jog = 0;
            rep(x, 0, 3)
            {
                rep(y, 0, 3)
                {
                    jog += s[i + x][j + y];
                }
            }
            if (jog != 45)
                return no;
        }
    }
    return yes;
    // ordered_set st;
    // st.insert(4);
    // for (auto i : st) {
    //     cout << i << ' ';
    // }

}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << solve() << endl;
}