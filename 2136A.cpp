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
	int a, b, c, d; cin >> a >> b >> c >> d;

	bool s1 = false;
	bool s2 = false;
	c -= a; d -= b;
	if (a == b)s1 = true;
	if (d == c)s2 = true;
	if (!s1 && a < b) {
		if (b <= (2 * a + 2)) {
			s1 = true;
		} else s1 = false;

	}
	if (!s1 && a > b) {
		if (a <= (2 * b + 2)) {
			s1 = true;
		} else s1 = false;


	}

	if (!s2 && c < d) {
		if (d <= (2 * c + 2)) {
			s2 = true;
		} else s2 = false;



	}
	if (!s2 && d < c) {
		if (c <= (2 * d + 2)) {
			s2 = true;
		} else s2 = false;


	}
	// if (abs(a - b) <= 3 ) {
	// 	s1 = true;
	// 	// cout << "Yes" << endl; return;
	// }
	// if (abs(d - c) <= 3) {
	// 	s2 = true;
	// }
	// if ((abs(b - a) % 3 == 0 ||  abs(b - a) % 3 == 2) && !s1) {
	// 	s1 = true;
	// 	// cout << "Yes" << endl; return;
	// }
	// if ((abs(d - c) % 3 == 0 || abs(d - c) % 3 == 2) && !s2) {
	// 	s2 = true;
	// }
	if (s1 && s2) {
		cout << "Yes" << endl; return;
	}
	cout << "NO" << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
