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
	vector<ll>res;
	for (ll p = 10; p + 1 <= n; p *= 10) {
		if (n % (p + 1) == 0) {
			res.push_back(n / (p + 1));
		}
	}
	if (res.empty()) {
		cout << 0 << endl; return;
	}
	reverse(res.begin(), res.end());
	cout << res.size() << endl;
	rep(i, 0, res.size()) {
		cout << res[i] << " ";
	}
	cout << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
