#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int max_len,int min_len,string max_str,string min_str){
    string str="";
    int j=0;
    for(int i=0;i<max_len;i+=1){
        if(min_str[j]==max_str[i]){
            str+=max_str[i];
            j++;
        }
    }
    if(str==min_str){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;


   
}

int main(){

    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    
        ll t;
        cin>>t;
        while(t--){
        string m,w;
        cin>>m>>w;

        int l1=m.size();
        int l2=w.size();

        if(l2>l1){
            int difference=l2-l1;
            for(int i=1;i<=difference;i++){
                m+="";
            }
            solve(l2,l1,w,m);
        }
        else if(l1>l2){
            int difference=l1-l2;
            for(int i=1;i<=difference;i++){
                w+="";
            }
            solve(l1,l2,m,w);
        }
        else{
            if(w==m)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }

            
        }
    



    return 0;
}