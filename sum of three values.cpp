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
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> v;
    rep(i, 0, n)
    {
        int tem;
        cin >> tem;
        v.push_back({tem, i});
    }
    sort(all(v));
    ll m = 0, l = 0, r = n - 1;
    while (m < n - 1)
    {
        ll tv = v[m].first + v[l].first + v[r].first;
        if (m != l && m != r && tv == x)
        {
            cout << v[m].second + 1 << " " << v[l].second + 1 << " " << v[r].second + 1 << endl;
            return;
        }
        if (tv < x)
            l++;
        else
            r--;
        if (l == r)
        {
            m++;
            l = 0;
            r = n - 1;
        }
    }
    cout << "IMPOSSIBLE\n";
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    solve();
}