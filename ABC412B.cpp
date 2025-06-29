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
bool check(char a, string t)
{
    rep(i, 0, t.size())
    {
        if (t[i] == a)
            return true;
    }
    return false;
}
bool solve()
{
    string s, t;
    cin >> s >> t;
    int n1 = s.size();
    int n2 = t.size();
    if (n1 < 2)
    {
        return true;
    }
    rep(i, 1, n1)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' && !check(s[i - 1], t))
        {
            return false;
        }
    }
    return true;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    solve() ? cout << "Yes" : cout << "No";
    cout << endl;
}