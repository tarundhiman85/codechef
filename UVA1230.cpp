#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
ll bin_exp(ll a, ll b, ll n){
    ll result=1;
    while (b){
        if (b%2==1) result=(result*a)%n;
        a=(a*a)%n;
        b/=2;
    }
    return result;
}
int main()
{
    int t;
    cin>>t;
    ll x,y,n;
    while (t--){
        cin>>x>>y>>n;
        cout<<bin_exp(x,y,n)<<"\n";
    }
    return 0;
}