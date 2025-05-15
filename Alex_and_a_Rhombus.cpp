#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=1,a=0;
    if(n==1){
        sum=1;
    }
    else{
    for(int i=2;i<=n;i++){
        a+=4;
       sum+=a;
    }
    }
    cout<<sum<<endl;
}