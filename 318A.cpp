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
    ll n, k;
    cin >> n >> k;
    if (n % 2)
    {
        ll od = (n + 1) / 2;
        if (k <= od)
        {
            cout << 2 * k - 1 << endl;
        }
        else
        {
            cout << 2 * (k - od) << endl;
        }
    }
    else
    {
        if (k <= (n / 2))
            cout << 2 * k - 1 << endl;
        else
            cout << 2 * (k - n / 2) << endl;
    }
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    solve();
}