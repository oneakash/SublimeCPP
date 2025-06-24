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

string S;
//---------------------------------------------------------------------------------------------------
bool vow(char x)
{
    if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'Y')
        return true;
    else
        return false;
}
int solve()
{
    int n = S.size();
    int min = n + 1;
    int pre = 0;
    int next = 0;
    vector<int>jumps;
    rep(i, 0, n)
    {
        if (vow(S[i]))
        {
            int p = i + 1 - pre;
            next = n - i;
            pre += p;
            jumps.push_back(p);
        }
    }
    if (next)
        jumps.push_back(next);
    sort(jumps.begin(), jumps.end());
    if (jumps.empty())
        return min;
    else
        return jumps.back();
}


//---------------------------------------------------------------------------------------------------
void _main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> S;
    cout << solve() << endl;
}
