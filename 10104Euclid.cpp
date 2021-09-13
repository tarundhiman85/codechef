#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

ll extended_euclid(ll a, ll b, ll &x, ll &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    ll x1, y1;
    ll d=extended_euclid(b, a%b, x1, y1);
    x=y1;
    y=x1 - y1*(a/b);
    return d;
}

int main()
{
    ll a, b;
    ll x= 0, y= 0;
    cin>>a>>b;
    ll gcd = extended_euclid(a, b, x, y);
    cout<<x<<" "<<y<<" "<<gcd<<"\n";
}