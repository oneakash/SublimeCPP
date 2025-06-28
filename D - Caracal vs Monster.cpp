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
void solve(ll h, ll n, ll &a)
{
    a += n;
    if (h > 1)
        solve(h / 2, 2 * n, a);
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    ll h, a = 0, n = 1;
    cin >> h;
    solve(h, n, a);
    cout << a << endl;
}