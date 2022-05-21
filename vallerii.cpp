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

            ll b[n];
            ll a[n];
            for(int i=0;i<n;i++){
                cin>>b[i];
            }
            // for(auto it:b){
            //     cout<<it<<" ";
            // }cout<<endl;
            for(int i=0;i<n;i++){
                a[i]=b[i]*b[i];
                
            }
            int f=-1;
            map<ll,int>m;

            for(int i=0;i<n;i++){
                m[a[i]]++;
                if(m[a[i]]==2){
                    f=0;
                    break;
                }
            }

            if(f==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

            
        }



    return 0;
}