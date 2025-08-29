#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,no=0,m=51;
    cin >> n>>k;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        if(k<=r && k>=l){
            no=max(no,l);
            m=min(m,r);
        }
    }
    if(no==m)cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
