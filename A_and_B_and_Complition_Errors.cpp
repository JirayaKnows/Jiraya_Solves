#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    vector<int> a(n),b(n-1),c(n-2);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        cin>>b[i];
    }
    for(i=0;i<n-2;i++){
        cin>>c[i];
    }
    int j,sum1=0,sum2=0,sum3=0;
    for(j=0;j<n;j++){
        sum1+=a[j];
    }
    for(j=0;j<n-1;j++){
        sum2+=b[j];
    }
    for(j=0;j<n-2;j++){
        sum3+=c[j];
    }
    cout<<(sum1-sum2)<<endl;
    cout<<(sum2-sum3)<<endl;

}