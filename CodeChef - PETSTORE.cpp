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
	ll n;
	cin >> n;
	vector<ll> v(n);
	int fq[101] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		fq[v[i]]++;
	}
	for (int i = 1; i < 101; i++)
	{
		if (fq[i] % 2)
		{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	ll t;
	cin >> t;
	while (t--)
		solve();
}
