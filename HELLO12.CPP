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
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    ll low=0;
    ll high=n-1;
    ll horizontal=0;
    ll vertical=0;

    ll s=v.size();
    if(s==1){
        cout<<(ll)(v[0]*v[0])<<endl;
    }
    else if(s%2==0){

        while(low<high){
            horizontal+=v[high];
            high--;
            vertical+=v[low];
            low++;
        }
        ll req=pow(horizontal,2)+pow(vertical,2);
        cout<<req<<endl;
    }
    else{

        ll pos=(s+1)/2;
        horizontal+=v[pos-1];
        v[pos-1]=0;
        // cout<<horizontal<<endl;
         while(low<high){
            horizontal+=v[high];
            high--;
            vertical+=v[low];
            low++;
        }
        ll req=pow(horizontal,2)+pow(vertical,2);
        cout<<req<<endl;

    }


    



    return 0;
}