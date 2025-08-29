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
    int n, m;
    cin >> n >> m;
    std::vector<string> v(n);
    fore(i, v)
    {
        cin >> i;
    }
    string s;
    cin >> s;
    rep(i, 0, s.size())
    {
        if (s[i] == 'S')
        {
            rep(p, 0, m)
            {
                rep(q, 0, n)
                {

                }
            }
        }
    }

}

//---------------------------------------------------------------------------------------------------
void _main()
{
    solve();
}