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
	ll n, m;
	cin >> n >> m;
	vector<ll>a(n);
	vector<ll>b(m);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (ll i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(all(a));
	ll s = 0;
	for (ll i = 0; i < m; i++) {
		a[0] = b[i];
		sort(all(a));
	}
	for (ll i = 0; i < n; i++) {
		s += a[i];
	}
	cout << s << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}

// 6 3
// 1 2 3 4 5 6
// 1 2 4

// 4 2 3 4 5 6