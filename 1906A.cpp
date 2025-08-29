// Bismillahir Rahmanir Rahim
//---------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std; void _main();
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cin.tie(0); ios::sync_with_stdio(false); _main();
}
typedef long long ll;
typedef pair<int, int> ii;
//---------------------------------------------------------------------------------------------------

void solve()
{

	vector<string> v(3);
	for (int i = 0; i < 3; i++) {
		cin >> v[i];
	}
	string res = "CCC";
	for (int i1 = 0; i1 < 3; i1++) {
		for (int j1 = 0; j1 < 3; j1++) {
			for (int i2 = 0; i2 < 3; i2++) {
				if (abs(i1 - i2) <= 1) {
					for (int j2 = 0; j2 < 3; j2++) {
						if (abs(j1 - j2) <= 1 && ii(i1, j1) != ii(i2, j2)) {
							for (int i3 = 0; i3 < 3; i3++) {
								if (abs(i2 - i3) <= 1) {
									for (int j3 = 0; j3 < 3; j3++) {
										if (abs(j2 - j3) <= 1 && ii(i3, j3) != ii(i2, j2) && ii(i3, j3) != ii(i1, j1)) {
											res = min(res, string(1, v[i1][j1]) + string(1, v[i2][j2]) + string(1, v[i3][j3]));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << res << endl;

}

//---------------------------------------------------------------------------------------------------
void _main()
{
	solve();
}
