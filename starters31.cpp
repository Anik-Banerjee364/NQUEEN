#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
int main(){
   
    lli x=0;

    ll t;
    cin>>t;
    for(int i=1;i<=t;i++){
        ll n;
        cin>>n;
        if(x>=0){
            x=x-n;
            cout<<x<<endl;
        }
        else{
            x=x+n;
            cout<<x<<endl;
        }
    }

    return 0;
}

