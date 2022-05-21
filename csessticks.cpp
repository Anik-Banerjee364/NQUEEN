#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    ll n;
    cin>>n;

    vector<ll>v;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);


    }

    sort(v.begin(),v.end());

    map<ll,ll>m;

    for(auto it:v){
        m[it]++;

    }

    int max=0;

    for(auto it:m){
        auto t=it.second;
        if(t>max){
            max=t;
        }
    }

    


    



    return 0;
}