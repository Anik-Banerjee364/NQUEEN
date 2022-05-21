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

            ll rem=(n%10)%2;

            n/=10;
            int f=-1;

            while(n>0){

                if((n%10)%2==rem){
                    f=0;
                    break;
                }
                n/=10;
                
            }
            if(f==-1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }

            
        }



    return 0;
}