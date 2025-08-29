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
	int n, k;
	cin >> n >> k;
	vector<int> h(n);
	fore(i, h)cin >> i;
	int ini = h[k - 1];
	sort(all(h));
	int w = 1;
	rep(i, 0, n) {
		if (h[i] > ini) {
			if (h[i] - ini + w - 1 > ini) {
				cout << "No" << endl; return;
			}
			w += (h[i] - ini);
			ini = h[i];
		}

	}
	cout << "Yes" << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
