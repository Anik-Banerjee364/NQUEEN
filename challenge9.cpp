#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    ll x=1;
    while(t--){
        ll n;
        cin>>n;
        ll sum=0;
        ll temp=n;
        ll difference;
        ll count=0;
        int first;
        


        while(temp>0){
            int r=temp%10;
            sum+=r;
            if(temp<10 && temp>0){
                 first=temp;
            }
            temp=temp/10;
            count++;
        }
        

        if(sum%9!=0){
            int z=sum%9;
            int k=9-z;
            if(k>first){
                cout<<"Case #"<<x<<": "<<n<<k<<endl;
                x++;
            }
            else{
                cout<<"Case #"<<x<<": "<<k<<n<<endl;
                x++;
            }
            
            
        }
    }


    return 0;
}