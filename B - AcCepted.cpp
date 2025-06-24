#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    int n = s.size();
    if (s[0] != 'A' || s[n - 1] < 'a' || s[n - 1] > 'z' || s[1] < 'a' || s[1] > 'z')
    {
        cout << "WA" << endl;
        return 0;
    }
    int c = 0;
    for (int i = 2; i < n - 1; i++)
    {
        if (s[i] == 'C')
        {
            c++;
        }
    }
    if (c != 1)
    {
        cout << "WA" << endl;
        return 0;
    }
    cout << "AC" << endl;

    return 0;
}


// #include<bits/stdc++.h>
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define fore(i,a) for(auto &i:a)
// #define all(x) (x).begin(),(x).end()
// #pragma GCC optimize ("-O3")
// using namespace std; void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
// typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
// template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
// template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
// //---------------------------------------------------------------------------------------------------
// /*---------------------------------------------------------------------------------------------------
// 　　　　　　　　　　　 ∧＿∧
// 　　　　　 ∧＿∧ 　（´<_｀ ）　 Welcome to My Coding Space!
// 　　　　 （ ´_ゝ`）　/　 ⌒i
// 　　　　／　　　＼　 　  |　|
// 　　　 /　　 /￣￣￣￣/　　|
// 　 ＿_(__ﾆつ/　    ＿/ .| .|＿＿＿＿
// 　 　　　＼/＿＿＿＿/　（u　⊃
// ---------------------------------------------------------------------------------------------------*/






// string S;
// //---------------------------------------------------------------------------------------------------
// #define yes "AC"
// #define no "WA"
// string solve() {
//     int n = S.length();

//     if (S[0] != 'A') return no;
//     if (S[1] < 'a' or 'z' < S[1]) return no;
//     if (S[n-1] < 'a' or 'z' < S[n-1]) return no;

//     int C = 0, x = 0;
//     rep(i, 2, n - 1) {
//         if ('a' <= S[i] and S[i] <= 'z') x++;
//         else if (S[i] == 'C') C++;
//         else return no;
//     }
//     if (C == 1) return yes;
//     return no;
// }
// //---------------------------------------------------------------------------------------------------
// void _main() {
//     cin >> S;
//     cout << solve() << endl;
// }