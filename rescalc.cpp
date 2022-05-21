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

            ll n,x;
            cin>>n;
            vector<ll>v(n);
            for(int i=0;i<n;i++) cin>>v[i];
            cin>>x;
            vector<ll>v1(n);
            for(int i=0;i<n;i++)
            v1[i]=v[i]&x;
            map<ll,ll>m;
            for(int i=0;i<n;i++) m[v1[i]]++;
            ll ans=0;
            for(auto it:m) ans+=it.second*it.second;
            cout<<ans<<endl;

            
        }



    return 0;
}