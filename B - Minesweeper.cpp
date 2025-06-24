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
    int h, w, val = 0;
    cin >> h >> w;
    std::vector<string> v(h);
    rep(i, 0, h)
    {
        cin >> v[i];
    }
    rep(i, 0, h) {
        rep(j, 0, w) {
            if (v[i][j] == '.') {
                int val = 0;
                rep(dx, -1, 2)
                {
                    rep(dy, -1, 2)
                    {
                        if (dx == 0 && dy == 0)
                            continue;
                        int x = i + dx, y = j + dy;
                        if (x >= 0 && x < h && y >= 0 && y < w && v[x][y] == '#')
                            val++;
                    }
                }
                v[i][j] = '0' + val;
            }
        }
    }
    rep(i, 0, h)
    {
        cout << v[i] << endl;
    }

}