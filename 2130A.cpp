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
	int n, mex = 1, s = 0, mexi = 0, a = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {cin >> v[i]; s += v[i];}
	for (int i = 0; i < n - 1; i++) {
		if (i == 0) {
			if (v[i] != 0) {mex = 0; break;}
		}
		if (v[i] != v[i + 1] && v[i + 1] != (v[i] + 1)) {
			mex = v[i] + 1; mexi = i;
		}
	}
	if (!mex) {
		a += mex;
		for (int i = mexi; i < n; i++) {
			a += v[i];
		}
	}
	else {
		a = s;
	}
	cout << a << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
