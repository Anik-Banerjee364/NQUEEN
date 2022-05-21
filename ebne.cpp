#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll s;
        cin>>s;
        ll temp=s;
        ll count=0;
        ll pos=n-1;
        ll f=2;
        string fstr="";
        while(temp>0){
            ll r=temp%10;
            if(r%2!=0){
                count++;
            }
            temp=temp/10;
        }
        temp=s;
        if(count<=1){
            cout<<"-1"<<endl;
        }

        else{
            while(temp>0){
                ll r=temp%10;
                if(r%2!=0){
                if(f>0){
                    fstr=to_string(r)+fstr;
                    f--;
                }
                }
                pos--;
                temp/=10;
            }
            cout<<fstr<<endl;
        
        }
    }

    return 0;
}