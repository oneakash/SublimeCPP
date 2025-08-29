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
	int n, h, m, s, totm, res = 1e9;
	cin >> n >> h >> m;
	s = h * 60 + m;
	rep(i, 0, n) {
		int x, y, a; cin >> x >> y;
		a = x * 60 + y;
		if (a >= s) totm = a - s;
		else totm = a - s + 24 * 60;
		res = min(res, totm);

	}
	cout << res / 60 << " " << res % 60 << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
