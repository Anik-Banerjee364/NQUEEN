#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    ll n;
    cin>>n;
    while(n--){

        ll k,x;
        cin>>k>>x;
        cout<<9*(k-1)+x<<endl;
    }



    return 0;
}