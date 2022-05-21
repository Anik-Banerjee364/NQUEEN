#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli cost(lli k,lli arr[],lli n){
    lli b[n];
    lli sum=0;
    for(int i=0;i<n;i++){
        b[i]=arr[i]+(lli)k*(i+1);
    }
    sort(b,b+n);
    for(int i=0;i<k;i++){
        sum+=b[i];
    }
    return sum;
}


void solve(){
    lli n,s;
    cin>>n>>s;
    lli arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    lli min=0;
    lli max=n+1;
    lli mid;
    
    while(min<max-1){
         mid=min+(max-min)/2;
        if(cost(mid,arr,n)<=s){
            min=mid;   
        }
        else{
            max=mid;
        }
    }
    cout<<min<<" "<<cost(min,arr,n)<<endl;

}




int main(){
   solve();
    return 0;
}