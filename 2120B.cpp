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
	ll n, s, res = 0;
	cin >> n >> s;
	vector<pair<ll, ll>>d(n);
	vector<pair<ll, ll>>p(n);
	for (ll i = 0; i < n; i++) {
		ll dx, dy, x, y;
		cin >> dx >> dy >> x >> y;
		d[i].first = dx; d[i].second = dy;
		p[i].first = x; p[i].second = y;
	}
	rep(i, 0, n) {
		if (d[i].first == d[i].second) {
			if (p[i].first == p[i].second)res++;
		} else if (p[i].first + p[i].second == s)res++;
	}
	cout << res << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
