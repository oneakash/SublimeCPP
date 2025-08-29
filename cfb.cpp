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
	int n, j, k;
	cin >> n >> j >> k;
	vector<int> v(n);
	fore(i, v)
	cin >> i;
	int jst = v[j - 1];
	sort(all(v));
	int ned = 0;
	rep(i, 0, n)
	{
		if (v[i] == jst)
			ned = i;
	}
	if (k > ned && n - ned < k)
	{
		cout << "No" << endl;
		return;
	}
	else
	{
		cout << "YES" << endl;
		return;
	}
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
