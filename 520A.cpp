// Bismillahir Rahmanir Rahim
//---------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; void _main();
int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	cin.tie(0); ios::sync_with_stdio(false); _main();
}
typedef long long ll;
//---------------------------------------------------------------------------------------------------

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
	}
	int a[30] = {0};
	for (int i = 0; i < n; i++)
	{
		a[s[i] - 'a' + 1]++;
	}
	bool f = true;
	for (int i = 1; i < 27; i++)
	{
		if (a[i] == 0)
			f = false;
	}
	if (f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	solve();
}
