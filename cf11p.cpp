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
	int n, m, an = 0, am = 0, cn = 0, cm = 0;
	cin >> n >> m;
	vector<string> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] == 'B') {
				cm = j + 1;
			}
		}
		if (cm)break;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (v[j][i] == 'B')
				cn = i + 1;
		}
		if (cn)break;
	}
	cout << (cn + 1) / 2 + 1 << " " << (cm + 1) / 2 + 1;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	solve();
}
