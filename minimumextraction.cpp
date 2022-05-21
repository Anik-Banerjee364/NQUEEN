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
            int arr[n];

            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            sort(arr,arr+n);

            ll minimum=arr[0];

            for(int i=0;i<n-1;i++){
            ll z=arr[i+1]-arr[i];
            minimum=max(minimum,z);
            }
            cout<<minimum<<endl;





            

        }
    



    return 0;
}