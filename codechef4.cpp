#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll cost=0;

        while(n>0){

            cost+=2*x;
            n-=3;
            if(n==1){
                cost+=x;
                n--;
                
            }
            else if(n>=2){
                continue;
            }
            else{
                break;
            }


        }
        cout<<cost<<endl;
    }


    return 0;
}