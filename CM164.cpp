#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,a;
    cin>>t;
    while (t--){
        unordered_set<ll> uset;
        cin>>n>>x;
        for (ll i = 0; i < n; ++i) {
            cin>>a;
            if(uset.count(a)>0){
                x--;
            }
            uset.insert(a);
        }
        if(x>0){
            cout<<uset.size()-x<<"\n";
        }
        else{
            cout<<uset.size()<<'\n';
        }
    }
    return 0;
}