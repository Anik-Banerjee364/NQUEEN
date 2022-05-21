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
                ll temp;
                cin>>temp;
                v.push_back(temp);
            }

            ll s=v.size();

            if(s==1){

                if(v[0]==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }

            else{

                sort(v.begin(),v.end());
                ll d=v[n-1]-v[n-2];
                if(d<=1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            
        }
    



    return 0;
}