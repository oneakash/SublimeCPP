#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
	remove(nums.begin(), nums.end(), 0);
}
void solve()
{
	int n;
	cin >> n;
	vector<int> nums(n);
	for (auto &a : nums)
		cin >> a;
	moveZeroes(nums);
	for (int i = 0; i < n; i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;
}