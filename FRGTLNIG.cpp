#include <bits/stdc++.h>
using namespace std;
void func(vector<string> &vs, unordered_set<string> &uset, int n, int l){
    unordered_set<string>::iterator it;
    for (int i = 0; i < vs.size(); ++i) {
       it=uset.find(vs[i]);
       if(it!=uset.end()){
           cout<<"YES ";
       }
       else cout<<"NO ";
    }
    uset.clear();
    vs.clear();
}
int main()
{
    int t,n,k,l;
    cin>>t;
    string s;
    vector<string> vs;
    unordered_set<string> uset;
    //vector<string> vs1;
    while (t--){
        cin>>n>>k;
        for (int i = 0; i < n; ++i) {
            cin>>s;
            vs.push_back(s);
        }
        for (int i = 0; i < k; ++i) {
            cin >> l;
            for (int j = 0; j < l; ++j) {
                cin >> s;
                uset.insert(s);
            }
        }
            func(vs,uset,n,l);
            cout<<"\n";
    }
    return 0;
}
