#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

ll arr[1000000]={0};

void SieveOfEratosthenes(ll l,ll n) {

    //getting the size from right limit
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    //processing prime numbers from left to right
    for (int p = l; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p]) {
            // Update all multiples of p
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }

    //checking prime  number for left to right and initializing to 1
    for (int p = l; p <= n; p++)
        if (prime[p]) {
            arr[p] = 1;
        }
}
ll max(ll a, ll b){
    if(a>b){
        return a;
    }
    return b;
}
ll min(ll a, ll b){
    if(a>b){
      return b;
    }
    return a;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    SieveOfEratosthenes(2,1000000);  //precompute all the array
    cin>>t;
    while (t--){
        ll l,r;
        cin>>l>>r;

        ll maxi=0;
        ll mini=INT64_MAX;
        ll diff=0;
        //checking prime numbers in the range
        for (ll i=l; i<=r; i++) {
            if(arr[i]==1){
                mini=min(mini, i);
                maxi=max(maxi, i);
            }
        }
        diff=maxi-mini;
        if (diff==(INT64_MAX)*(-1)){
            cout<<"-1\n";
        }
        else if(diff==0){
            cout<<"0\n";
        }
        else{
            cout<<diff<<"\n";
        }
    }
    return 0;
}