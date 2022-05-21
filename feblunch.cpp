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

            int sum=0;
            for(int i=0;i<n;i++){
                cin>>arr[i];
                sum+=arr[i];
            }

            int prefix[n];
            prefix[0]=arr[0];

            for(int i=0;i<n;i++){
                prefix[i]=prefix[i-1]+arr[i];

            }

            int m1;
            int m2;
            int ans=sum;

            for(int i=0;i<n;i++){
                int m1=prefix[i];
                int m2=sum-m1;
                int req=max(m1,m2);
                ans=min(ans,req);


            }

            cout<<ans<<" ";
            cout<<endl;
            
        }
    



    return 0;
}