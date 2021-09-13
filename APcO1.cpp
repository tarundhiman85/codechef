#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin>>t;
    int am,bm,cm,tm,a,b,c;
    while (t--){
        cin>>am>>bm>>cm>>tm>>a>>b>>c;
        if(((a>=am && b>=bm && c>=cm)&&(a+b+c)>=tm)){
                cout<<"YES\n";
            }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}