// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	vector<string>v;
// 	string s;
// 	int fq[26] = {0};
// 	while (cin >> s) {
// 		v.push_back(s);

// 	}
// 	for (int i = 0; i < v.size(); i++) {
// 		for (int j = 0; j < v[i].size(); j++) {
// 			int x = (int)(v[i][j] - 'a');
// 			fq[x]++;
// 		}
// 	}
// 	for (int i = 0; i < 26; i++) {
// 		cout << fq[i] << " ";
// 	}
// 	cout << endl;
// }

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> v;
	string s = "af p xpkcaqvnpk pfg, af ipqe qpri, gauuikifc tpw, ceiri udvk tiki afgarxifrphni cd eao-wvmd popkwn, hiqpvri du ear jvaql vfgikrcpfgafm du cei xkafqaxnir du xrwqedearcdkw pfg du ear aopmafpcasi xkdhafmr afcd fit pkipr. ac tpr qdoudkcafm cd lfdt cepc au pfwceafm epxxifig cd ringdf eaorinu hiudki cei opceiopcaqr du cei uaing qdvng hi qdoxnicinw tdklig dvc-pfg edt rndtnw ac xkdqiigig, pfg edt odvfcpafdvr cei dhrcpqnir--ceiki tdvng pc niprc kiopaf dfi mddg oafg cepc tdvng qdfcafvi cei kiripkqe";
	int fq[26] = {0};

	for (int j = 0; j < s.size(); j++) {
		char ch = tolower(s[j]);
		if (ch >= 'a' && ch <= 'z') {
			fq[ch - 'a']++;
		}
	}

	int t;
	for (int i = 0; i < 26; i++) {
		t += fq[i];
		cout << fq[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 26; i++) {
		cout << fq[i] * 100 * 1.0 / t << " ";
	}
	cout << endl;
	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " ";
	}
	cout << endl;

	return 0;
}
