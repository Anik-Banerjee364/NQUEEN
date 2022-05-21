#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int last=n%10;
        int nature=last&1;
        n=n/10;
        int f=-1;
    while(n>0){
        int r=n%10;
        int nature1=r&1;
        if(nature1==nature){
            f=0;
            break;
        }
        n/=10;
    }
    if(f!=-1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

    return 0;
}