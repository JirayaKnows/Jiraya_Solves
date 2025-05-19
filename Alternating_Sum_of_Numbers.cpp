#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,t;
    cin>>t;
    while(t--){
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bool b = 1;
    int sum=0;
    for(i=0;i<n;i++){
      if(b == 1){
       sum+=a[i];
       b=0;
      }
      else if(b==0){
        sum-=a[i];
        b=1;
      }
    }
    cout<<sum<<endl;
}
}