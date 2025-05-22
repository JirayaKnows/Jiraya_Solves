#include <bits/stdc++.h>
using namespace std;
int32_t main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int Anton=0,Danik=0,i;
    for(i=0;i<n;i++){
        if(s[i]=='A'){
            Anton++;
        }
        else{
            Danik++;
        }
    }
    if(Anton>Danik){
        cout<<"Anton\n";
    }
    else if(Anton<Danik){
        cout<<"Danik\n";
    }
    else{
        cout<<"Friendship\n";
    }
    return 0;
}