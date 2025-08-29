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
typedef pair<int, int> iii;
typedef pair<ll, int> ii;
//---------------------------------------------------------------------------------------------------

void solve()
{
	int n, p;
	cin >> n >> p;
	vector<ii> v(n);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v[i].second = a;
	}
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v[i].first = a;
	}
	ll ans = p;
	int r = n - 1;
	v.push_back(ii(p, n));
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		ans += min(r, v[i].second) * v[i].first;
		r -= min(r, v[i].second);
	}
	cout << ans << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
