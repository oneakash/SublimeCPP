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
	ll n, s, c = 0;
	cin >> n;
	s = n * (n + 1) / 2;
	ll pt = 1;
	while (pt <= n)
	{
		s -= (2 * pt);
		pt *= 2;
	}
	cout << s << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	ll t;
	cin >> t;
	while (t--)
		solve();
}
