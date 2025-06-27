// Bismillahir Rahmanir Rahim
//---------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; void _main();
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(0); ios::sync_with_stdio(false); _main();
}
typedef long long ll;
//---------------------------------------------------------------------------------------------------
void solve()
{
    ll m, b;
    cin >> m >> b;
    ll best = 0;
    for (int y = b; y >= 0; y--)
    {
        ll x = m * (b - y);
        ll t = (x + 1) * y * (y + 1) / 2 + (y + 1) * x * (x + 1) / 2;
        best = max(best, t);
    }
    cout << best << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    solve();
}