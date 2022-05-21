#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio
 
    ll x,n;
 
    cin>>x>>n;
 
    set<int>positions;
    multiset<int>lengths;
 
    positions.insert(0);
    positions.insert(x);
 
    lengths.insert(x-0);
 
    for(int i=1;i<=n;i++){
 
        ll to_add;
        cin>>to_add;
 
        positions.insert(to_add);
 
        auto iter=positions.find(to_add);
 
        ll prevval=*prev(iter);
        ll nextval=*next(iter);
 
        lengths.erase(lengths.find(nextval-prevval));
        lengths.insert(to_add-prevval);
        lengths.insert(nextval-to_add);
 
       
        auto ans=lengths.rbegin();
 
        cout<<*ans<<" ";
    }
    return 0;
}