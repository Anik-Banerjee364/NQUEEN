#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
        cout<<endl;

        
    }


    return 0;
}