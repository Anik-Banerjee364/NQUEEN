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
            int n;
            cin>>n;
            string s;
            cin>>s;
            int count=0;
            vector<int>v;
            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    v.push_back(i);
                }


            }
           int ans=0;
           if(v.size()<=1){
               cout<<"0"<<endl;
           }else{
           for(int i=0;i<v.size()-1;i++){
               if((v[i+1]-v[i])==2){
                   ans=ans+1;
               }
               else if(v[i+1]-v[i]==1){
                   ans+=2;
               }
           
           }
           

           cout<<ans<<endl;
           }
        }



    return 0;
}