#include "bits/stdc++.h"
using namespace std;
typedef long long Int;
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define sz(s) (int)(s).size()
#define pb push_back
#define mp make_pair
const int inf = 1000000000;
const int MOD = 1000000007;
int arr[100];
int main(){
    int test_cases;
    cin>>test_cases;
    int n,k;
    while (test_cases--){
        cin>>n>>k;
        int count=0;
        FOR(i,0,n-1){
            cin>>arr[i];
            if((arr[i]+k)%7==0) count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}