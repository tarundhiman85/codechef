#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main()
{
int t;
cin>>t;
ll n,x,s,r;
ll maxi=0;
    while (t--) {
        cin>>n>> x;
        maxi=0;
        while (n--) {
            cin >> s >> r;
            if (s <= x) {
                maxi = max(maxi, r);
            }
        }
        cout << maxi << "\n";
    }
    return 0;
}