#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i,j;
    char ch;
    double M[12][12],sum=0;
    cin>>ch;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>M[i][j];
            if(j>i){
                sum+=M[i][j];
            }
        }
    }
    if(ch=='S')
    cout<<fixed<<setprecision(1)<<sum<<endl;
    if(ch=='M')
    cout<<fixed<<setprecision(1)<<sum/66.0<<endl;
}