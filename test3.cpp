#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k<=n && k>=x){
            int p=0;
            for(int i=0;i<n;i+=1){
                if(p==x){
                    p=0;
                }
                cout<<p<<" ";
                p++;
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}