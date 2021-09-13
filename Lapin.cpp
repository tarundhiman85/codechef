//#include "bits/stdc++.h"
//using namespace std;
//
//int main()
//{
//    int t;
//    cin>>t;
//    while (t--) {
//        string s;
//        cin >> s;
//        int arr[124]={0};
//        if (s.length() % 2 == 0) {
//            for (int i = 0; i < s.size(); ++i) arr[(int) s[i]]++;
//        }
//        else
//            {
//                int mid = s.size() / 2;
//                for (int i = 0; i < s.size(); ++i)
//                {
//                    if(s[i]!=s[mid])
//                    {
//                     arr[(int)s[i]]++;
//                    }
//                }
//            }
//        bool flag=true;
//        for (int i = 97; i < 123; ++i) {
//            if(!(arr[i]==0 || arr[i]==2)) flag=false;
//          }
//        if(flag) cout<<"YES\n";
//        else cout<<"NO\n";
//        }
//    return 0;
//}
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

inline int test()
{
    string a, a1, a2;
    cin>>a;
    int length = a.length();
    int iter= length/2;
    int iter2 = iter;  //if even
    //= iter+1 // if odd
    if (length%2)
    {
        iter2++;
    }

    a1 = a.substr(0,iter);
    a2 = a.substr(iter2,iter);
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());

    //cout<<a1<<endl<<a2;
    if (a1==a2){printf("YES\n");}
    else printf("NO\n");

    return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        test();
    }

    return 0;
}
