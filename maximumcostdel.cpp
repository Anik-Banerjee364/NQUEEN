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

            ll n,a,b;

            cin>>n>>a>>b;

            string s;
            cin>>s;

            if(b>=0){
                cout<<a*n+b*n<<endl;
            }
            else{
                ll total=0;
                for(int i=0;i<n;i++){
                    if(s[i]!=s[i+1]){
                        total++;
                    }
                }
                ll ans=a*n+((total/2)+1)*b;
                cout<<ans<<endl;
            }

            
        }
    



    return 0;
}