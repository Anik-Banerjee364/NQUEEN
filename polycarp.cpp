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
                cin>>arr[i];
            }

            if(arr[0]==n || arr[n-1]==n){
             cout<<n<<" ";
                for(int i=n-1;i>=0;i--){
                    if(arr[i]!=(n))
                cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
            else {
                cout<<"-1"<<endl;
            }

        }
    



    return 0;
}