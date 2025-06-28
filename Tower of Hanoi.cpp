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
void toh(vector<pair<int, int>> &v, int n, int a, int b, int c)
{
    if (n > 0)
    {
        toh(v, n - 1, a, c, b);
        v.push_back({a, c});
        toh(v, n - 1, b, a, c);
    }
}

void solve()
{
    int n;
    cin >> n;
    int a = 1, b = 2, c = 3;
    vector<pair<int, int>> v;
    toh(v, n, a, b, c);
    cout << v.size() << endl;
    fore(i, v) {
        cout << i.first << " " << i.second << endl;
    }
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    solve();
}