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
	string s, t = "";
	cin >> s;
	int c0 = 0;
	int c1 = 0;
	rep(i, 0, s.size()) {
		if (s[i] == '0')c0++; else c1++;
	}
	rep(i, 0, s.size()) {
		if (s[i] == '0' && c1) {
			t += '1'; c1--;
		}
		else if (s[i] == '1' && c0) {
			t += '0'; c0--;
		} else break;
	}
	cout << s.size() - t.size() << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
