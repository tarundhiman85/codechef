#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        if(n==1){
            if(arr[0]!=0){
                cout<<"1\n";
            }
            else{
                cout<<"0\n";
            }
        }
        else {
            for (int i = 0; i < n; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
