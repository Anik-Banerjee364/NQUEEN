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
         

         for(int i=1;i<=n/2;i++){
             cout<<x-i<<" ";
         }
         if(n%2==1){
             cout<<x<<" ";
         }
         for(int i=1;i<=n/2;i++){
             cout<<x+i<<" ";
         }
         cout<<endl;

          
          
          
        }
    



    return 0;
}