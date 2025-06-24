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
    ll n, s = 0;
    cin >> n;
    string ara[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    if (n < 10)
    {
        if (n <= 5)
        {
            cout << ara[n - 1] << endl;
        }
        else if (n == 6 || n == 7)
        {
            cout << ara[0] << endl;
        }
        else
            cout << ara[1] << endl;
    }
    else {
        for (ll i = 5; i <= n; i *= 2)
        {
            s += i;
            if (s >= n)
            {
                ll x = i / 5;
                ll d = s - n;
                ll c = 1;
                for (ll p = d; p > x; p -= x)
                {
                    c++;
                }
                if (c == 1)
                {
                    cout << "Howard" << endl;
                    break;
                }
                else if (c == 2)
                {
                    cout << "Rajesh" << endl;
                    break;
                }
                else if (c == 3)
                {
                    cout << "Penny" << endl;
                    break;
                }
                else if (c == 4)
                {
                    cout << "Leonard" << endl;
                    break;
                }
                else if (c == 5)
                {
                    cout << "Sheldon" << endl;
                    break;
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