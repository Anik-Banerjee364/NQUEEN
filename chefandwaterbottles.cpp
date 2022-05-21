#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,k;
        ll cal=0;
        ll pos;
        cin>>n>>x>>k;
        for(int i=1;i<=n;i++){
            cal+=x;
            if(cal>k){
                pos=i;
                cout<<pos-1<<endl;
                break;
            }

        }

        if(k>cal){
            cout<<n<<endl;
        }
        
    }
    return 0;
}