#include <bits/stdc++.h>
using namespace std;
int main(){
     int a,b;
     cin>>a>>b;
     int x = a + b;
     int y = a - b;
     int z = a * b;
    //  if(x>y && x>z){
    //     cout<<x<<endl;
    //  }
    //  else if(y>x && y>z){
    //     cout<<y<<endl;
    //  }
    //  else{
    //     cout<<z<<endl;
    //  }
    int result = max({x,y,z});
    cout<<result<<endl;
}