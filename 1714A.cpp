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

bool cmp1(pair<int, int>x, pair<int, int>y) {
	if (x.first != y.first)
		return x.first < y.first;
	else
		return x.second < y.second;
}
void solve()
{
	int n, h, m, totm = 0;
	cin >> n >> h >> m;
	vector<pair<int, int>> v(n);
	for (auto &x : v) {
		cin >> x.first >> x.second;
	}
	sort(v.begin(), v.end(), cmp1);
	rep(i, 0, n) {
		if (v[i].first == h && v[i].second >= m) {
			totm = (v[i].first - h) * 60 + v[i].second - m;
			cout << totm / 60 << " " << totm % 60 << endl; return;
		}
	}
	rep(i, 0, n) {
		if (v[i].first > h) {
			totm = (v[i].first - h) * 60 + v[i].second - m;
			cout << totm / 60 << " " << totm % 60 << endl; return;
		}
	}

	totm = (24 + v[0].first - h) * 60 + v[0].second - m;
	cout << totm / 60 << " " << totm % 60 << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{	int t; cin >> t;
	while (t--)
		solve();
}
