#include<bits/stdc++.h>
using namespace std;

#define ll long long


bool check(string &t){
    int c=0;
    int size=t.length();
    for(int i=0;i<size;i+=1){
        if(t[i]==')')
        c--;
        else
        c++;
        if(c<0)
        return false;
    }
    if(c==0)
        return true;else{

        return false;
        }
}

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0); //fastio

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string t;
        t=s;
        int size=s.size();

        for(int i=0;i<size;i++){
            if(s[i]=='A' && s[i]=='B')
            t[i]='(';
            else
            t[i]=')';
        }

        if(check(t)){
            cout<<"YES"<<endl;
            continue;
        }
        
        for(int i=0;i<size;i++){
            if(s[i]=='B' && s[i]=='C')
            t[i]='(';
            else
            t[i]=')';
        }

        if(check(t)){
            cout<<"YES"<<endl;
            continue;
        }
        
        for(int i=0;i<size;i++){
            if(s[i]=='A' && s[i]=='C')
            t[i]='(';
            else
            t[i]=')';
        }

        if(check(t)){
            cout<<"YES"<<endl;
            continue;
        }
        
        for(int i=0;i<size;i++){
            if(s[i]=='C' && s[i]=='A')
            t[i]=')';
            else
            t[i]='(';
        }

        if(check(t)){
            cout<<"YES"<<endl;
            continue;
        }
        
        for(int i=0;i<size;i++){
            if(s[i]=='A' && s[i]=='B')
            t[i]=')';
            else
            t[i]='(';
        }

        if(check(t)){
            cout<<"YES"<<endl;
            continue;
        }
        
        for(int i=0;i<size;i++){
            if(s[i]=='B' && s[i]=='C')
            t[i]=')';
            else
            t[i]=')';
        }

        if(check(t)){
            cout<<"YES"<<endl;
            continue;
        }
            
        cout<<"NO"<<endl;

        
    }



    return 0;
}