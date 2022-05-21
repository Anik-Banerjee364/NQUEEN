#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    map<ll,ll>freq;
    for(int i=1;i<=n;i++){
        ll num;
        cin>>num;
        freq[num]++;

    }
    ll z=freq.size();
    for(auto it:freq){
       if(z>1){
          
           it.second--;
           z--;
       }
    }

    ll sum=0;
    for(auto it:freq){
        if(it.second!=0){
            sum+=it.second;
        }
    }

    cout<<sum<<endl;
    return 0;
}