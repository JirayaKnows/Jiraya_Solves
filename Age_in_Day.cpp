#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum,years,months,days;
    cin>>n;
    sum=n/365;
    years=sum;
    sum=(n%365)/30;
    months=sum;
    sum=((n%365)%30);
    days=sum;
    cout<<years<<" years\n";
    cout<<months<<" months\n";
    cout<<days<<" days\n";
}