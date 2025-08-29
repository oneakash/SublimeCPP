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
const int sqlim = 1000001;
//---------------------------------------------------------------------------------------------------
set<ll> primesq() {
	static bool arr[sqlim];
	for (int i = 2; i * i < sqlim; i++) {
		if (!arr[i]) {
			for (int j = i * i; j < sqlim; j += i) {
				arr[j] = true;
			}
		}
	}
	set<ll> res;
	for (int i = 2; i < sqlim; i++) {
		if (!arr[i])
			res.insert((ll)i * i);
	}
	return res;
}
//---------------------------------------------------------------------------------------------------
void _main()
{
	int n; cin >> n;
	set<ll>sq(primesq());
	while (n--)
	{
		ll x;
		cin >> x;
		if (sq.find(x) != sq.end())cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
