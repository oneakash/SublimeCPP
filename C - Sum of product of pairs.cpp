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
    ll n, s = 0, mod = 1000 * 1000 * 1000 + 7;
    cin >> n;
    vector<ll> v(n);
    for (auto &a : v) {
        cin >> a;
        s += a;
        s %= mod;
    }
    ll a = 0;
    for (ll i = 0; i < n; i++)
    {
        s -= v[i];
        s = (s % mod + mod) % mod;
        a += (v[i] * s);
        a %= mod;
    }
    cout << a << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    solve();
}