#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        ll m, n, k;
        cin>>n>>m>>k;
        ll xoor=0;
        ll mat[n][m];
        ll o =2;
        ll sum=0;
        while( o <= m+1)
        {
            sum = o+k;
            xoor^=sum;
            o++;
        }
        int u=2;
        for (ll i = 1; i < n; i++) {
            for (ll j = m-1; j >m-u; j--) {
                mat[i][j]=(i+1)+(j+1)+k;
                xoor^=mat[i][j];
            }
            u++;
        }
        cout<<xoor<<"\n";
    }
    return 0;
}