#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    map<string,string>mapping1;
   
    for(int i=0;i<n;i++){
        string name1;
        string ip1;
        cin>>name1>>ip1;
        ip1+=";";
        mapping1[ip1]=name1;
    }
   
    for(int i=0;i<m;i++){
        string name2;
        string ip2;
        cin>>name2>>ip2;
       for(auto it:mapping1){
           if(it.first==ip2){
               cout<<name2<<" "<<ip2<<" "<<"#"<<it.second<<endl;
           }
       }
    }

   
     
    return 0;
}