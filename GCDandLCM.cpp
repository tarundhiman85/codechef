#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
    while (b){
        a=a%b;
        swap(a,b);
    }
    return a;
}
int main()
{
    int t;
    cin>>t;
    ll a, b;
    while (t--){
        cin>>a>>b;
        ll hcf=gcd(a,b);
        ll lcm=a*b/hcf;
        cout<<hcf<<" "<<lcm<<"\n";
    }
    return 0;
}