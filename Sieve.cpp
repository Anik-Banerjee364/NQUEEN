#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    int n;
    cin>>n;
    int count=0,k=0;
    map<int,int>m;

    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
    if (is_prime[i]) {
        for (int j = i*2 ; j <= n; j += i){
           
            is_prime[j] = false;
            m[j]++;
        }
        }
    }

    
    // for(int i=0;i<=n;i++){
    //     if(is_prime[i]==true){
    //         cout<<i<<endl;
    //     }
    // }

   for(auto it:m){
       if(it.second==2){
           count++;
       }
   }
    cout<<count<<endl;
    return 0;
}