//#include "bits/stdc++.h"
//using namespace std;
//int main(){
//    int t;
//    cin>>t;
//    long long int c;
//    while(t--){
//        cin>>c;
//
//    }
//    return 0;
//}
// C++ program for the above approach
// C++ program to Count all pair with given XOR
// value x
#include<bits/stdc++.h>

using namespace std;

// Returns count of pairs in arr[0..n-1] with XOR
// value equals to c.
//long long int xorPairCount(long long int arr[], long long int n, long long int c)
//{
//    unordered_set<int> s;
//    long long int product=1;
//    for (long long int i=0; i<n ; i++)
//    {
//
//        long long int arrj= c ^arr[i];
//        if (s.find(arrj) != s.end()) {
//            product = max(product, arrj * arr[i]);
//        }
//        s.insert(arr[i]);
//    }
//    return product;
//}

// driver program
int main()
{
    int t;
    cin>>t;
    long long int c;
    while(t--) {
        long long int d=1;
        long long int k=2;
        cin >> c;
        long long prev=0;
        do{
            prev=k;
            k=(long long int)pow(2, (double)d);
            d++;
        }while(k<=c);

        long long int a=prev-1;
        long long int b=a^c;
        cout<<a*b<<"\n";

    }
    return 0;
}
