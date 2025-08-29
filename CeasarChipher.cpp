#include<bits/stdc++.h>
using namespace std;

string ceasarchipher(string &s, int c) {
	string d;
	for (auto &x : s) {
		d += (x - c - 'a' + 26) % 26 + 'a';
	}
	// for (auto &x : s) {
	// 	if (x - c >= 'a') {
	// 		d += x - c;
	// 	}
	// 	else {
	// 		d += x - c + 26;
	// 	}
	// }
	return d;
}

int main() {
	string s = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";

	for (int i = 1; i < 26; i++) {
		cout << "Shift " << i << ": " << ceasarchipher(s, i) << endl;
	}
}