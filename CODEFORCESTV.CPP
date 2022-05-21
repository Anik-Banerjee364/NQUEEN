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
        ll n,k,d;
        cin>>n>>k>>d;

        vector<ll>v;
        for(ll i=0;i<n;i++){
            ll k;
            cin>>k;
            v.push_back(k);
        }
        map<ll,ll>mp;
        // ll count=0;
        ll ans;
        ll an=0;
        for(int i=0;i<d;i++){
            mp[v[i]]++;
            if(mp[v[i]]==1){
                an++;
            }

        }
        ans=an;
        

        for(int i=d;i<n;i++){
            mp[v[i-d]]--;
            if(mp[v[i-d]]==0){
                an--;
            }
            mp[v[i]]++;
            if(mp[v[i]]==1){
                an++;
            }
            ans=min(ans,an);

        }
        cout<<ans<<endl;
    }



    return 0;
}