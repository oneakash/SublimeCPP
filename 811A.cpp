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
    ll a, b, n = 1000 * 1000 * 1000;
    cin >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2) {
            a -= i;
            if (a < 0)
            {
                cout << "Vladik" << endl;
                break;
            }
        }
        else
        {
            b -= i;
            if (b < 0) {
                cout << "Valera" << endl;
                break;
            }
        }
    }
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    solve();
}