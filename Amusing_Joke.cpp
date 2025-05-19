#include <bits/stdc++.h>
using namespace std;
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    string s,a,p,b;
    cin>>s>>a>>p;
    b = s+a;
    sort(b.begin(),b.end());
    sort(p.begin(),p.end());
    if(b==p){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
