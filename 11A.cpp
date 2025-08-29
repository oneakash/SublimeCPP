#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, d;
    cin >> n >> d;

    vector<int> b(n);
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    int moves = 0;

    for (int i = 1; i < n; ++i) {
        if (b[i] <= b[i - 1]) {
            int k = (b[i - 1] - b[i]) / d + 1;
            b[i] += k * d;
            moves += k;
        }
    }

    cout << moves << endl;
    return 0;
}
