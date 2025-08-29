// Bismillahir Rahmanir Rahim
//---------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; void _main();
int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	cin.tie(0); ios::sync_with_stdio(false); _main();
}
typedef long long ll;
//---------------------------------------------------------------------------------------------------

ll solve(ll n)
{
	if (!(n / 10))
		return n;
	ll s = 0;
	while (n)
	{
		s += (n % 10);
		n /= 10;
	}
	return solve(s);
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	ll n, s;
	while (cin >> n && n) {
		// if (!(n / 10))
		// 	cout << n << endl;
		// else
		// 	cout << solve(n) << endl;

		if (n == 0)
			cout << 0 << endl;
		else
			cout << (n - 1) % 9 + 1 << endl;
	}
}
