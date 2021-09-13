
#include<bits/stdc++.h>
using namespace std;
int lcs(int arr[], int n){
    unordered_map<int,int> map;
    vector<int> v;
    for(int i=0; i<n; i++) map[arr[i]]=arr[i];
    for(int i=0; i<n; i++){
        if (map.count(arr[i])) v.push_back(arr[i]);
    }
    int count=0;
    for (int i = 1; i < n; i++) {
        if(v[i]-v[i-1]==1) count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<lcs(arr, n);
}