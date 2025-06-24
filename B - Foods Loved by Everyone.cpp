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
    int fa[50] = {0};
    rep(i, 0, n)
    {
        int k;
        cin >> k;
        rep(j, 0, k)
        {
            int x;
            cin >> x;
            fa[x]++;
        }
    }
    int a = 0;
    rep(i, 0, 50)
    {
        if (fa[i] == n)
        {
            a++;
        }
    }
    cout << a << endl;
}
