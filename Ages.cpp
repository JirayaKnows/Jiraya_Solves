#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double avg,i=0,sum=0;
    while(1){
        cin>>n;
        if(n<0) break;
        sum+=n;
        i+=1;
    }
    cout<<fixed<<setprecision(2)<<(double)(sum/i)<<endl;    
}