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
	fore(i, v)cin >> i;
	ll ans = 1e18;
	int beg = 0;
	while (beg < n) {
		int end = beg;
		while (end + 1 < n && v[end + 1] == v[end]) {
			end++;
		}
		ll len = end - beg + 1;
		ll cur = (n - len) * v[beg];
		ans = min(ans, cur);
		beg = end + 1;
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
