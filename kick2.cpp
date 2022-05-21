#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll fac){
    vector<int>v;

    while(fac>0){
        v.push_back(fac%10);
        fac/=10;
    }
    for(int i=0;i<v.size()/2;i++){
        if(v[i]!=v[v.size()-1-i]){
            return false;
        }
        return true;
    }


}

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    
        ll t;
        cin>>t;
        int x=1;
        while(t--){

            ll a;
            cin>>a;
            ll count=0;

            for(int i=1;i*i<=a;i++){
                if(a%i==0){
                    ll fac1=i;
                    ll fac2=a/i;
                    // string f1=(to_string)(fac1);
                    // string temp1=f1;
                    // string f2=(to_string)(fac2);
                    // string temp2=f2;
                    // reverse(f1.begin(),f1.end());
                    // reverse(f2.begin(),f2.end());
                    // if(temp1==f1){
                    //     count++;
                    // }
                    // if(temp2==f2 && f2!=f1){
                    //     count++;
                    // }
                    if(check(fac1)) count++;
                    if(check(fac2)&& fac1!=fac2) count++;
                }
            }
            cout<<"Case #"<<x<<":"<<" "<<count<<endl;  
            x++;
        }
    



    return 0;
}