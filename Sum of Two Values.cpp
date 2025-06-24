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
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> v;
    rep(i, 0, n)
    {
        ll tem;
        cin >> tem;
        v.push_back({tem, i});
    }
    sort(all(v));
    ll l = 0, r = n - 1;
    while (l < r)
    {
        ll tv = v[l].first + v[r].first;
        if (tv == x)
        {
            cout << v[l].second + 1 << " " << v[r].second + 1 << endl;
            return;
        }
        if (tv < x)
            l++;
        else
            r--;
    }
    cout << "IMPOSSIBLE\n";
}

//---------------------------------------------------------------------------------------------------
void _main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
}