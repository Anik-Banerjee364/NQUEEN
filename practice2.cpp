#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll count=n;
        while(n>0){
            n=n/2;
            count--;
        }
        cout<<count<<endl;
    }



    return 0;
}