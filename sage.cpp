#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    
    ll n;
    cin>>n;

    ll arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    ll inter=(n+1)/2;
    ll final=inter-1;
    cout<<final<<endl;

    sort(arr,arr+n);

    // ll p=0;
    // ll q=inter;

    

    cout<<arr[inter-1]<<" ";
    

    ll p=0;
    ll q=inter;

   bool f=true;

   while(f){
       if(p<inter-1){
           cout<<arr[p]<<" ";
           p++;
       }
       if(q<n){
           cout<<arr[q]<<" ";
           q++;

       }
       if(p==inter-1 && q==n){
           break;
       }
   }
   

    




    return 0;
}