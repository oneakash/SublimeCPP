// Bismillahir Rahmanir Rahim
//---------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); return 0;}
typedef long long ll;
//---------------------------------------------------------------------------------------------------
ll solve()
{
    ll x, y;
    cin >> x >> y;
    ll line = max(x, y);
    ll nume = 1 + (line - 1) * 2;
    ll m = line - 1;
    ll fe = m * (2 + (m - 1) * 2) / 2 + 1;
    ll le = fe + nume - 1;
    if (line % 2 != 0)
    {
        if (x >= y)
            return fe + y - 1;
        else
            return le - x + 1;
    }
    else
    {
        if (x >= y)
            return le - y + 1;
        else
            return fe + x - 1;
    }

}

//---------------------------------------------------------------------------------------------------
void _main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
}
