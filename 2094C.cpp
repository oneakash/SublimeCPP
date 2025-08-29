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
	int n;
	cin >> n;
	vector<vector<int>> v(n);
	rep(i, 0, n) {
		rep(j, 0, n) {
			int a;
			cin >> a; v[i].push_back(a);
		}
	}
	vector<int> res;
	rep(i, 0, n) {
		res.push_back(v[0][i]);
	}
	if (n > 1)
		rep(i, 1, n) {
		res.push_back(v[i][n - 1]);
	}
	int sz = res.size();
	int fq[sz + 2] = {0};
	rep(i, 0, res.size()) {
		fq[res[i]] = 1;
	}
	int mis;
	rep(i, 1, sz + 2) {
		if (fq[i] == 0) {
			mis = i; break;
		}
	}
	res.insert(res.begin(), mis);
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
