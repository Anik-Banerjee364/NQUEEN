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

            ll a,b;
            cin>>a>>b;
            int xored;

            int z=(a-1)%4;
            if(z==0)
            {
                xored=a-1;
            }
            else if(z==1){
                xored=1;


            }
            else if(z==2){
                xored=a;
            }
            else{
                xored=0;
            }


            // int z=xored^b;

            if(xored==b){
                cout<<a<<endl;
            }
            else if((xored^b)!=a){
                cout<<(a+1)<<endl;
            }
                else {
                        cout<<(a+2)<<endl;
            }

            
        }



    return 0;
}