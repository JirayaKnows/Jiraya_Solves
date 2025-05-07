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
        int a[n];
        int i,sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                sum++;
            }
        }
        if(sum%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}