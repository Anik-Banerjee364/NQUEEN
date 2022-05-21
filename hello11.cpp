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
            string s;
            cin>>s;

            set<char>prev;
            int temp=0;

            for(auto it:s){
                if(prev.count(it)){
                    temp+=(int)prev.size()-1;
                    prev.clear();
                }
                else{
                    prev.insert(it);
                }
            }
            temp+=prev.size();
        cout<<temp<<endl;
        }



    return 0;
}