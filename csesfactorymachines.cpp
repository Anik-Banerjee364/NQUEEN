#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    ll n,t;
    cin>>n>>t;

    vector<ll>v;

    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }

    ll low=0;
    ll high=1e18;
    ll ans;

    ll mid;

    while(low<=high){
        mid=(low+high)/2;

        ll products=0;
        for(int i=0;i<n;i++){
            products+=min((ll)(mid/v[i]),(ll)1e9);
        }

        if(products>=t){
            high=mid-1;
            ans=mid;

        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;


    
    



    return 0;
}