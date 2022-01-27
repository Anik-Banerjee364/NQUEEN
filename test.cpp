#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int X,Y,Z;
        cin>>X>>Y>>Z;
        int profit=(X*Z)-(X*Y);
        cout<<profit<<endl;
    }
    return 0;
}