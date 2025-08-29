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
	ll a, b, k;
	cin >> a >> b >> k;
	ll gc = __gcd(a, b);
	if (a == b || (k >= a && k >= b) || ((a / gc) <= k && (b / gc) <= k)) {
		cout << 1 << endl;
	} else {
		cout << 2 << endl;
	}

	// if((a/gc)<=k && (b/gc)<=k){
	// 	cout<<1<<endl;return
	// }
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
