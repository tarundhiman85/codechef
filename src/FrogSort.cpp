#include<bits/stdc++.h>
using namespace std;
int findIndex(vector<int> &w, int elem, int n){
    int i = 0;
    while (i < n)
    {
        if (w[i] == elem) {
            break;
        }
        i++;
    }
    return i;
    }

int main()
{
    int t;
    cin>>t;
    int n;
    vector<int> w;
    vector<int> l;
    int x;
    vector<int> w1;
    while (t--){
        cin>>n;
        vector<int> position(n);
        for (int i = 0; i < n; i++) {
            cin>>x;
            w.push_back(x);
            w1.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            position[i]=i;
        }
        for (int i = 0; i < n; i++) {
            cin>>x;
            l.push_back(x);
        }
        int jump=0;
        int index, p ,c;
        sort(w1.begin(), w1.end());
        for(int j=1; j<n; j++){
            index=findIndex(w, w1[j], n);
            p= position[findIndex(w, w1[j-1], n)];
            c = index;
            while (c<=p){
                c =c+l[index];
                position[index]=c;
                jump++;
            }
        }
        cout<<jump<<"\n";
    }
    return 0;
}
