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

               int arr[n+2];

               for(int i=1;i<=n;i++){
                   cin>>arr[i];
               }
                int count[n+2];
                int minimum=1e9;
                int k=1;

               for(int i=1;i<=n;i++){
                   int c=0;
                   int temp=arr[i];
                   while(temp%2==0){
                       temp=temp/2;
                       c++;
                   }
                   minimum=min(minimum,c);
                   k++;
               }

               
               cout<<minimum<<endl;
               
                
            }



    return 0;
}