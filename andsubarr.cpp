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

            ll res=0;
            ll temp=n;

            while(n>0){
                res++;
                n/=2;
            }

            ll ans;
            ans=max(temp-pow(2,res-1)+1,pow(2,res-2));
            cout<<ans<<endl; 
            
        }
    



    return 0;
}