#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n;
    std::vector<int> x(n);
    for (int &a : x)
        cin >> a;
    cin >> m;
    std::vector<int> y(m);
    vector<int>v;
    for (int &a : y)
        cin >> a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (y[j] % x[i] == 0)
            {
                v.push_back(y[j] / x[i]);
            }
        }
    }
    sort(v.rbegin(), v.rend());
    int a = 1;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
            a++;
        else
            break;
    }
    cout << a << endl;
    return 0;
}