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
            ll n,m;
            cin>>n>>m;

            ll arr[n][m];

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>arr[i][j];
                }
            }

            ll count=0,sum=0;
            ll minimum=10000;

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(arr[i][j]<0){
                        count++;
                    }
                        minimum=min(minimum,abs(arr[i][j]));
                        sum+=abs(arr[i][j]);

                    
                }
            }

            if(count%2==0){
                cout<<sum<<endl;
                
            }
            else{
                sum=sum-2*minimum;
                cout<<sum<<endl;
            }

            
        }
    



    return 0;
}