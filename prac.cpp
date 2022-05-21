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

            vector<ll>v;

            for(int i=0;i<n;i++){
                cin>>v[i];
            }

            ll gap1=0;
            ll gap2=0;


            for(int i=1;i<n;i++){
                if((v[i]-v[i-1])<=3){
                    if((v[i]-v[i-1])==2)
                    gap1++;
                    else if((v[i]-v[i-1])==3)
                    gap2++;      
                }
            }
            if(gap1==0 && gap2==0){
                cout<<"YES"<<endl;
            }
            else if(gap1==2 && gap2==0)
            cout<<"YES"<<endl;
            else if(gap2==1 && gap1==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

            


           
            
        }
    



    return 0;
}