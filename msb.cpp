#include<bits/stdc++.h>
using namespace std;

#define ll long long

int find_pos_of_msb(int a){
   int k=(int)(log2(a));
   return k+1;
}
void solve(int n){
    int arr[n+2];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        int pos=find_pos_of_msb(arr[i]);
        m[pos]++;
    }
    ll pair=0;
    for(auto it:m){
        ll q=it.second;
        pair+=q*(q-1)/2;     
    }

    cout<<pair<<endl;
}



int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio
        ll t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            solve(n);
        }
    return 0;
}