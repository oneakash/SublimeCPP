#include<bits/stdc++.h>
using namespace std;
bool solve()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (auto &a : v)
		cin >> a;
	for (int i = 0; i < n - 1; i++)
	{
		if (v[i] > v[i + 1])
			return false;
	}
	return true;
}
int main()
{
	cout << solve() << endl;
	return 0;
}