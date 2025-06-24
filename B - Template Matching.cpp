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



//---------------------------------------------------------------------------------------------------
void _main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    vector<string> b(m);
    fore(i, a)
    cin >> i;
    fore(i, b)
    cin >> i;
    rep(i, 0, n - m + 1)
    {
        rep(j, 0, n - m + 1)
        {
            bool me = true;
            rep(x, 0, m)
            {
                rep(y, 0, m)
                {
                    if (a[i + x][j + y] != b[x][y])
                        me = false;
                }
            }
            if (me)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}