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
typedef unsigned long long ll;
//---------------------------------------------------------------------------------------------------
void solve()
{
    ll l, r, fr, sr, x, fs = 0, s = 0, c = 0, mod = 1000 * 1000 * 1000 + 7;
    bool fc = true, sc = true;
    cin >> l >> r;
    for (ll i = 1; i < r; i *= 2)
    {
        s += i;
        c++;
        if (s >= l && f)
        {
            fr = i;
            f = false;
            if (s >= r)
            {
                if (c % 2)
                {
                    x = r - l;
                    fs += r * r - l * l;
                    fs %= mod;
                    cout << fs << endl;
                    return;
                }
                else
                {
                    x = r - l;
                    fs += r * (r + 1) - l * (l + 1);
                    fs %= mod;
                    cout << fs << endl;
                    return;
                }
            }
            if (c % 2)
            {
                x = s - l;
                fs += s * s - l * l;
                fs %= mod;
            }
            else
            {
                x = s - l;
                fs += s * (s + 1) - l * (l + 1);
                fs %= mod;
            }
        }
        if (s >= r && sc)
        {
            sr = i;
            if (c % 2)
            {
                s -= i;
            }
        }
    }
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    solve();
}