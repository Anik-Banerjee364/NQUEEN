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

            ll n,k;
            cin>>n>>k;
            ll i=1;
            ll c;

            bool f=false;

            while(f){
                if((i*(n-1))>k){
                    c=i-1;
                    f=false;
                }
                i++;
            }

            if(c*(i-1)<=k){
                cout<<max(c,k-c*(n-1))<<endl;

            }
            else{
                
            }
            
        }
    



    return 0;
}