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
vector<ll> l;
vector<ll> p;
ll solve(ll n, ll x)
{
    if (n == 0)
        return x ? 1 : 0;
    if (x == 1)
        return 0;
    else if (x <= l[n - 1] + 1)
        return solve(n - 1, x - 1);
    else if (x <= l[n - 1] + 2)
        return p[n - 1] + 1;
    else if (x <= 2 * l[n - 1] + 2)
        return p[n - 1] + 1 + solve(n - 1, x - (l[n - 1] + 2));
    return p[n];
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    ll n, x, a = 0;
    cin >> n >> x;
    l.resize(n + 1);
    p.resize(n + 1);
    l[0] = 1;
    p[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        l[i] = 2 * l[i - 1] + 3;
        p[i] = 2 * p[i - 1] + 1;
    }
    cout << solve(n, x) << endl;
}