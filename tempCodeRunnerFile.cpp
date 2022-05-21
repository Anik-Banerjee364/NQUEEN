#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s;
        cin>>s;
        map<int,int>m;
        for(int i=1;i<=n;i++){
        
        }

        string str="";
        for(auto it:m){
            int k=it.second;
            for(int i=1;i<=k;i++){
                str+=it.first;
            }

        }
        cout<<str<<endl;
    }

    return 0;
}