#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio


    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    // for(auto it:arr){
    //     sum+=it;
    // }
    sort(arr,arr+n);
    cout<<max((ll)2*arr[n-1],sum)<<endl;
}