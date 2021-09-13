#include "bits/stdc++.h"
using namespace std;
typedef long long  ll;
#define mod 1000
ll n, k, t_case;

ll bin_exp(ll a, ll b){
    ll result=1;
    while (b){
        if (b%2==1) result=(result*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return result;
}
int main(){

    cin>>t_case;
    while(t_case){
        cin>>n>>k;
        /* executing first 3 digits */
        double x=k*(log10(n)); //getting integer values by log 10 that is
        x=x-(int)x;              // taking fraction value only
        double ans=pow(10, x);
        ans=ans*100;
        cout<<(int)ans<<"...";

        /* executing last 3 digits */
        printf("%03d\n", bin_exp(n, k));
        t_case--;
    }
    return 0;
}