#include<bits/stdc++.h>
using namespace std;
int recur(int n, vector<int> &v){
    if (n<2){
       return 0;
    }
    swap(v[n-1],v[n]);
    recur(n-1, v);
}
int main()
{
    int n;
    cin>>n;
    if(n<2){
        cout<<"1\n";
    }
    else {
        vector<int> v(n + 1);
        for (int i = 0; i <= n; i++) {
            v[i] = i;
        }
        recur(n, v);
        for (int i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
