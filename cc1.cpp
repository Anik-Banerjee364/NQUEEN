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

            ll n,m;
            cin>>n>>m;
            string s;
            cin>>s;
            string a;
            cin>>a;

            // int l=a.size();

            // int k=s.size();
            // ll prev=a[0];
            int p=m-1;
            int j=0;
            string s1="";
            int f=-1;

            for(int i=0;i<n;i++){

               if(s[i]=='?'){
                   if(a[j]=='e'){
                       s1+='d';
                   }
                   else{
                       s1+='e';
                   }
                   
               }

               else if(s[i]!='?'){
                   if(s[i]==a[j]){
                    s1+=s[i];
                      j++;
                      p--;
                   }else{
                       s1+=s[i];
                   }
                   }
                //    else{
                //        j++;
                //    }
                   if(p<0){
                       f=1;
                       break;
                   }
               }
            

            if(f==1){
                cout<<"-1"<<endl;
            }
            else{
                cout<<s1<<endl;
            }

           


            
        }
    



    return 0;
}