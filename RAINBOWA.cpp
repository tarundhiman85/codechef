//#include "bits/stdc++.h"
//using namespace std;
//typedef long long Int;
//#define FOR(i,a,b) for(int i=a;i<=b;++i)
//#define sz(s) (int)(s).size()
//#define pb push_back
//#define mp make_pair
//const int inf = 1000000000;
//const int MOD = 1000000007;
//int arr[101];
//int main()
//{
//    int test_cases,n;
//    cin>>test_cases;
//    while (test_cases--){
//        cin>>n;
//        FOR(i,0,n-1){
//            cin>>arr[i];
//        }
//        int l=0,h=n-1;
//        bool flag=false;
//        while(l<h){
//            if(arr[l]!=arr[h])
//            {
//                flag= false;
//            }
//            else{
//                flag=true;
//            }
//            l++;
//            h--;
//        }
//        if(n%2!=0){
//            if (arr[l]!=7) flag=false;
//        }
//        if (flag) cout<<"yes\n";
//        else cout<<"no\n";
//    }
//    return 0;
//}

//EFFICIENT
#include <bits/stdc++.h>
#define MAX 102

using namespace std;

int A[MAX];

void func(int n) {
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    vector<pair<int, int> > v;
    int idx = 0;
    while (idx < n) {             //places the elements in arr with count
        int p = A[idx];
        int cnt = 0;
        while (idx < n && p == A[idx]) {
            idx++;
            cnt++;
        }
        v.push_back(make_pair(p, cnt));
    }

    if ((int) v.size() != 13) {   //if the vector size is less then 13 then not possible
        cout<<"no\n";
        return;
    }

    for (int i = 0; i < 7; i++) {    //checks if all the elements are present or not 1 to 7
        if (v[i].first != i + 1) {
            cout << "no\n";
            return;
        }
    }

    for (int i = 7; i < 13; i++) {   //from 7 to 13 check condition
        // LEARNING CHECKING REVERSE COUNT 12-i ??and checking if the value exist or not
        if (v[i].first != 13 - i || v[i].second != v[12 - i].second) {
            cout << "no\n";
            return;
        }
    }
    cout<<"yes\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        func(n);
    }
    return 0;
}