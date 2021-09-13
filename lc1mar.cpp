#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2==0){
            cout<<"0\n";
        }
        else{
            int res=0;
            for(int i=0; i<n; i++){
                if((arr[i]%2==0) && ((arr[i]+1)/2-1<=0))
                {
                    res=1;
                    break;
                }
            }
            if (res==0) cout<<"-1\n";
            else cout<<"1\n";
        }
    }
    return 0;
}