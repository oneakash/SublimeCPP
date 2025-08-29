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
	int n, k; cin >> n >> k;
	string s;
	cin >> s;
	int cnt = 0;
	bool f = false;
	for (int i = 0; i < n; i++) {

		if (s[i] == '1') {
			cnt++;
		}
		if (cnt >= k) {
			f = true; break;
		}
		if (s[i] == '0')cnt = 0;
	}
	if (f) {
		cout << "NO" << endl;
	}
	else {
		cout << "Yes" << endl;
		vector<int> v(n);
		int val = n;
		rep(i, 0, n) {
			if (s[i] == '0') {
				v[i] = val--;
			}
		}
		rep(i, 0, n) {
			if (s[i] == '1') {
				v[i] = val--;
			}
		}
		rep(i, 0, n) {
			cout << v[i];
			if (i < n - 1) {
				cout << " ";
			} else cout << endl;
		}
	}
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
