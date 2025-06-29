// Bismillahir Rahmanir Rahim
//---------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; void _main();
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin.tie(0); ios::sync_with_stdio(false); _main();
}
typedef long long ll;
//---------------------------------------------------------------------------------------------------

vector<string> solve(vector<string> &v, int n, int k)
{
    if (k == 0)
        return {{"."}};
    vector<string> g = solve(v, n, k - 1);
    int gsize = g.size();
    vector<string> res(n * gsize);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c = v[i][j];
            for (int idx = 0; idx < gsize; idx++)
            {
                int affrow = i * gsize + idx;
                string p;
                if (c == '*')
                {
                    p = string(gsize, '*');
                }
                else
                {
                    p = g[idx];
                }
                res[affrow] += p;
            }
        }
    }
    return res;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
    ll n, k;
    cin >> n >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<string> fi = solve(v, n, k);
    for (const string &row : fi)
        cout << row << endl;
}
