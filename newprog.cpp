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
            int f=1;
            string s;
            cin>>s;

            for(int i=0;i<s.size();i++){

                int cnt=1;

                while(s[i]==s[i+1] && (i+1)<s.size()) {
                    cnt++;
                    i++;
                }
                if(cnt<2){
                    f=0;
                    break;
                }

            }
            if(f==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            
        }
    



    return 0;
}