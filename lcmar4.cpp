#include "bits/stdc++.h"
using namespace std;
typedef  long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--) {
        ll n;
        cin >> n;
        ll h[n];
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++) cin >> h[i];
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++) {
                if (h[j] > h[i]) break;
                else if (h[i] == h[j]) {
                    map[i+1]++;
                    map[j+1]++;
                }
            }
        int i=0;
        for (; i < n;) {
            if(map.find(i+1)!=map.end()){
                cout<<map[i+1]<<" ";
                i++;
                continue;
            }
            cout<<"0 ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}
