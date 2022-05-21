#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define d double

int main(){

    std::ios_base::sync_with_stdio(0);
     cin.tie(0); 
     cout.tie(0);

     ll t;
     cin>>t;
     
     while(t--){

        ll n,H;
        cin>>n>>H;

        vector<ll>damage;

        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            damage.push_back(temp);
        }

        sort(damage.rbegin(),damage.rend());
        ll count=0;

        if(H<=damage[0]){
            cout<<"1"<<endl;
        }
        else{
            ll x=(H/(damage[0]+damage[1]))*2;
            ll g=H%(damage[0]+damage[1]);
            if(g<=damage[0] && g!=0){
                x++;
            }
            else if(g>damage[0] && g!=0){
                x+=2;
            }
            cout<<x<<endl;
            
        }

        // cout<<damage[1]<<endl;

        
     
     }
    return 0;
}