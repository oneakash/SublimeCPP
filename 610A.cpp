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
	ll n;
	cin >> n;
	if (n % 2 == 0 && n / 4 >= 1)
	{
		if (n % 4 == 0)
		{
			cout << n / 4 - 1 << endl;
			return;
		}
		else
		{
			cout << n / 4 << endl;
			return;
		}
	}
	else
		cout << 0 << endl;
	return;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	solve();
}
