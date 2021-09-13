#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    ll n,m,x;
    cin>>t;
    while (t--){
        cin>>n>>m>>x;
        ll k=1;
        ll count=0;
        ll col_count=m;
        for (ll i = 1; i <= n; i++) {
            ll j=i;
            do{
                //by column
                if(j==x){
                    break;
                }
                j=j+n;
                count++;
            }while (col_count>1);
            if(j==x){
                break;
            }
        }
        for (ll i = 1; i <= n; i++) {
            for (; k <= m; k++) {
                count--;
                if(count==0){
                    break;
                }
            }
            if (count==0){
                break;
            }
        }
        cout<<k<<"\n";
    }
    return 0;
}
