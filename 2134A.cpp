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
	int n, a, b;
	cin >> n >> a >> b;
	if (a > b) {
		if ((n & 1) == (b & 1) && (n & 1) == (a & 1))cout << "Yes" << endl;
		else cout << "NO" << endl;
	}
	else if ((n & 1) == (b & 1))cout << "Yes" << endl;
	else cout << "No" << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
