#include <bits/stdc++.h>
using namespace std;
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string a = s;
        sort(a.rbegin(),a.rend());
        if(s==a){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}