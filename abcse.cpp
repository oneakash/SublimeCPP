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
	int n; cin >> n; std::vector < pair<char, ll>> v(n);
	for (auto &x : v) {
		cin >> x.first >> x.second;
	}
	int t = 0;
	string s = "";
	for (int i = 0; i < n; i++) {
		if (t + v[i].second > 100) {
			cout << "Too Long" << endl; return;
		}
		else {
			for (int j = 0; j < v[i].second; j++)
				s += v[i].first;
			t += v[i].second;
		}
	} if (s.size() <= 100) cout << s << endl;
	else cout << "Too Long" << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	solve();
}
