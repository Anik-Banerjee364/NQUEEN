#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){

    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i].first.first;
        cin>>v[i].first.second;
        v[i].second=i;
    }

    int ans[n+1];
    int last_room=0,rooms=0;

    priority_queue<pair<int,int>>pq;

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        if(pq.empty()){
            last_room++;
            ans[v[i].second]=last_room;
            pq.push({-v[i].first.second,last_room});
        }
        else {
            pair<int,int>m=pq.top();
            if(-m.first<v[i].first.first){
                pq.pop();
                pq.push({-v[i].first.second,m.second});
                ans[v[i].second]=m.second;
            }else{
                last_room++;
                pq.push({-v[i].first.second,last_room});
                ans[v[i].second]=last_room;

            }
        }
    }
    cout<<last_room<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

}

int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    solve();
    



    return 0;
}