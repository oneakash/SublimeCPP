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
stack<int>s;
void solve()
{
	string op;
	cin >> op;
	if (op == "push") {
		int x; cin >> x;
		s.push(x);
	}
	else if (op == "top")cout << s.top() << endl;
	else if (op == "pop")s.pop();
}

//---------------------------------------------------------------------------------------------------
void _main()
{	int q; cin >> q;

	while (q--)
		solve();
}
