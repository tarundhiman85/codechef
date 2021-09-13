//#include "bits/stdc++.h"
//using namespace std;
//bool check_equal(int arr[],int n){
//    int count=0;
//    for (int i = 1; i < n; ++i) {
//        if(arr[i-1]!=arr[i]) return false;
//    }
//    return true;
//}
//int main()
//{
//    int t;
//    cin>>t;
//    while (t--) {
//        int n;    //number of workers
//        cin >> n;
//        int salary[n];
//        int max_idx=0;
//        for (int i = 0; i < n; ++i) {
//            cin >> salary[i];  //salary of ith worker
//            if (salary[max_idx] < salary[i]) {
//                max_idx = i;
//            }
//        }
//        int count=0,cp=0,new_idx=max_idx;
//        //sort(salary, salary + n);
//        if (!check_equal(salary, n)) {
//            while (cp!=(n-1)) {
//                cp=0;
//                for (int i = 0; i < n; i++) {
//                    if (i != max_idx) {
//                        salary[i]++;
//                        if(salary[max_idx] < salary[i]) {
//                            new_idx = i;
//                        }
//                        if(salary[max_idx]==salary[i])  cp++;
//                    }
//                }
//                max_idx=new_idx;
//                count++;
//            }
//            cout<<count<<"\n";
//        } else{
//            cout<<"0\n";
//        }
//    }
//    return 0;
//}

//EFFICIENT
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<cstdio>
#include<map>
#include<cassert>
using namespace std;

typedef long long Int;
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define sz(s) (int)(s).size()
#define pb push_back
#define mp make_pair
const int inf = 1000000000;
const int MOD = 1000000007;

int a[1111];

int main()
{
    //freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    int tests;
    cin>>tests;
    while(tests--){
        int n;cin>>n;
        FOR(i,1,n)cin>>a[i];
        sort(a+1,a+n+1); //one based indexing
        int ans=0;
        FOR(i,1,n)ans+=a[i]-a[1];
        cout<<ans<<endl;
    }
}
