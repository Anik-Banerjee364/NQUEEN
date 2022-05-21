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

            // ll flag;
            if(n==1){
                cout<<k<<endl;
            }
            else{

            if(k>n){
                cout<<(k+n-1)/n<<endl;
            }
            else if(k==n){
                cout<<1<<endl;

            }
            else{
            ll i=1;
            ll reqd;
            bool f=true;
            // while(f){
            //     if((i*k)>=n){
            //         reqd=i*k;
            //         f=false;
            //     }
            //     i++;
            // }

            ll r=(n+k-1)/k;
            reqd=r*k;

            cout<<(reqd+n-1)/n<<endl;
                
            }
            }

            



            
        }
    



    return 0;
}