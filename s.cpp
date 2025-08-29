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
	string s;
	cin >> s;
	while (k--)
		for (int i = 1; i < n; i++)
		{
			if (s[i] == 'G' && s[i - 1] == 'B') {
				s[i - 1] = 'G';
				s[i] = 'B';
			}


		}
	cout << s << endl;

}

//---------------------------------------------------------------------------------------------------
void _main()
{
	solve();
}
