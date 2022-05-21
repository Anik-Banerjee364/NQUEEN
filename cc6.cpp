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

            if(arr[0]%2==arr[n]%2){
                cout<<"1"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }



    return 0;
}