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
	ll n, k;
	cin >> n;
	vector<ll> v(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	cin >> k;
	ll uj = v[k - 1];
	sort(v.begin(), v.end());
	ll uji;
	for (uji = 0; uji < n; uji++)
	{
		if (v[uji] == uj)
			cout << uji + 1 << endl;
	}
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	ll t;
	cin >> t;
	while (t--)
		solve();
}
