#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio


    ll n,m;
    cin>>n>>m;

    ll a[n]={0};
    ll b[m]={0};
    
    ll count=0;

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    map<int,int>freq;

    for(int i=0;i<m;i++){
        freq[b[i]]++;
    }

    int i=0;
    int j=0;
    int k=0;

    for(int j=0;j<m;j++){
        ll frequency=freq[b[j]];
        while(i<n||j<n){
            if(a[i]==b[j]){
                count=count+frequency;
                i++;
            }
            else if(a[i]>b[j]){
                break;
            }
           else if(b[j]>a[i]){
               while(a[i]!=b[j] && i<n){
                   i++;
               }
           }
            
            
        }
    }
    cout<<count<<endl;




    return 0;
}