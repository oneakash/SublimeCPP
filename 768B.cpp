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

deque<ll> solve(deque<ll> &f)
{
	ll mid = f[f.size() / 2];
	if (f.front() == 0 && f.back() == 0 && (mid == 0 || mid == 1))
		return f;
	if (f.front() == 1 && f.back() == 1 && (mid == 0 || mid == 1))
		return f;
	f[f.size() / 2] = mid % 2;
	f.push_back(mid / 2);
	f.push_front(mid / 2);
	solve(f);
	return f;
}

//---------------------------------------------------------------------------------------------------
void _main()
{
	ll n, l, r;
	cin >> n >> l >> r;
	deque<ll> f;
	f.push_back(n);
	deque<ll> fr = solve(f);
	fore(i, fr)
	cout << i << " ";
	cout << endl;
}
