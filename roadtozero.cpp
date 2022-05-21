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

            ll x,y;
            cin>>x>>y;

            ll a,b;
            cin>>a>>b;


            if(2*a<=b){
                ll cost=(x+y)*a;
                cout<<cost<<endl;

                
            }
            else{
            

            ll minimum=min(x,y);
            ll cost=0;

            cost+=b*minimum;

            if(minimum==x){
                x=0;
                y=y-minimum;
            }

            else if(minimum==y){
                y=0;
                x=x-minimum;
            }

            ll left=max(x,y);

            cost+=a*left;

            cout<<cost<<endl;


            
        }
        }


    return 0;
}