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
vector<string> solve(int n)
{
    if (n == 1)
        return {"0", "1"};
    vector<string> psolve = solve(n - 1);
    vector<string> revsolve = psolve;
    reverse(revsolve.begin(), revsolve.end());
    int size = psolve.size();
    for (int i = 0; i < size; i++)
    {
        string z = "0" + psolve[i];
        psolve[i] = "1" + revsolve[i];
        psolve.push_back(z);
    }
    return psolve;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    int n;
    cin >> n;
    vector<string> v = solve(n);
    fore(i, v)
    cout << i << endl;
}