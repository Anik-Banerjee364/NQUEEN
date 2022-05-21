#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    
        ll t;
        cin>>t;
        while(t--){

            ll n;
            cin>>n;
            ll ans;

            ll q=n/4;
            ll r=n%4;
            if(r!=0){
                ans=q+1;
            }
            else{
                ans=q;
            }
            cout<<ans<<endl;
            
        }
    



    return 0;
}