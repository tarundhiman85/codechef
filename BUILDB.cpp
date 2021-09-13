#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
ll max(ll a, ll b){
    return a>b?a:b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,r;
    cin>>t;
    while (t--){
        cin>>n>>r;
        ll A[n];
        ll B[n];
            for (ll i = 0; i < n; ++i) {
                cin >> A[i];
            }
            for (ll i = 0; i < n; ++i) {
                cin >> B[i];
            }
            if(n>1){
                ll maxi=0;
                ll x=0;
                ll tension_reduced=0;
                ll no_min=0;
                x=x+B[0];
                for (ll i = 1; i < n; ++i) {
                    no_min=A[i]-A[i-1];
                    tension_reduced=no_min*r;
                    x=max(x-tension_reduced,0);
                    x+=B[i];
                   maxi=max(maxi,x);
                }
                cout<<maxi<<'\n';
            }
            else{
                cout<<B[0]<<"\n";
            }
    }
    return 0;
}