#include<bits/stdc++.h>
using namespace std;

#define ll long long




int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    
       ll n,k;
       cin>>n>>k;

       if(k==1){
           cout<<n<<endl;
       }
    //    else if(k==n){
    //        ll a=1;
    //        for(ll i=2;i<=n;i++){
    //            a=a^i;
    //        }
    //        cout<<a<<endl;
    //    }

       else if(k<=n && k!=1){
        
           ll ans=0,j=1;
        

        while(ans<n){
            ans=ans+j;
            j=j*2;
        }
        cout<<ans<<endl;
       }

        



    return 0;
}