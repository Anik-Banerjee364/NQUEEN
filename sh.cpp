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
            ll n,x;
            cin>>n>>x;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            sort(arr,arr+n);
            ll ans;

          if(x%arr[0]==0){
              ans=x/arr[0];

          }
          else{
              ans=(x/arr[0])+1;
          }
          cout<<max(ans,n)<<endl;
            
        }
    



    return 0;
}