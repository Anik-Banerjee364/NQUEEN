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

            ll arr[n];

            for(int i=0;i<n;i++){
                arr[i]=i+1;
            }

            cout<<"2"<<endl;

            cout<<arr[n-1]<<" "<<arr[n-2]<<endl;

            for(int i=n-2;i>0;i--){
                arr[i]=(arr[i]+arr[i+1]+1)/2;
                cout<<arr[i]<<" "<<arr[i-1]<<endl;
            }
            
        }
    



    return 0;
}