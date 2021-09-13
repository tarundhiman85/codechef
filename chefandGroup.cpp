#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0;
        int n=s.size();
        int count=0;
        while(i<n){
            if(s[i]=='1'){
                while (s[i]=='1'){
                    i++;
                }
                count++;
                continue;
            }
        i++;
        }
        cout<<count<<"\n";
    }
    return 0;
}

