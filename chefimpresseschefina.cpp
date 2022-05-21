#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll cost[n];
        for(int i=0;i<n;i++){
            cin>>cost[i];
        }

        sort(cost,cost+n);

        ll count=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            if((sum+cost[i])>x){
                if((sum+((cost[i]+1)/2))<=x){
                    sum+=(cost[i]+1)/2;
                    count++;
                }
                else{break;}
            }
            else{
                sum+=cost[i];
                count++;
            }
            
        }
        cout<<count<<endl;
    }

    return 0;
}