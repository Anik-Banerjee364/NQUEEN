#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    ll x=1;
    ll count=0;
    while(t--){
        ll a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            ll temp=i;
            ll p=1;
            ll sum=0;
            while(temp>0){
                int r=temp%10;
                p*=r;
                sum+=r;
                temp=temp/10;
            }

            if(p%sum==0){
                count++;
            }
        }
        cout<<"Case #"<<x<<": "<<count<<endl;
        x++;
        count=0;
    }
    


    return 0;
}