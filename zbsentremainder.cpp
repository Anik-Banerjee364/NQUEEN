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

            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            sort(arr,arr+n);
            int minimum=arr[0];

            for(int i=1;i<=n/2;i++){
                
                cout<<arr[i]<<" "<<minimum<<endl;
            }
            
        }
    



    return 0;
}
