#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,x;
    cin>>n>>h>>x;
    int arr[n];
    unordered_map<int, int> map;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        map[arr[i]]++;
    }
    int hours_left=abs(h-x);
    if(map.count(hours_left)>0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}

