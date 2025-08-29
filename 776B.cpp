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
	vector<bool> primes(n + 2, true);
	primes[0] = primes[1] = false;
	for (int i = 2; i <= n + 2; i++) {
		if (primes[i] && (ll)i * i <= n + 2) {
			for (int j = i * i; j <= n + 2; j += i) {
				primes[j] = false;
			}
		}
	}
	if (n <= 2) {
		cout << 1 << endl;
	} else
		cout << 2 << endl;
	for (int i = 2; i < n + 2; i++) {
		if (primes[i]) {
			cout << 1 << " ";
		} else cout << 2 << " ";
	} cout << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	solve();
}
