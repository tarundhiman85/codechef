
#include<iostream>
#include "bits/stdc++.h"
using namespace std;
//char str[100001];
long int countSubStr(string str)
{
    long int m = 0; // Count of 1's in input string

// Traverse input string and count of 1's in it
    for (long int i=0; i<str.size(); i++)
    {
        if (str[i] == '1')
            m++;
    }
// Return count of possible pairs among m 1's
    return m*(m+1)/2;
}


int main()
{
    long int t,n;
    cin>>t;
    string s;
    while (t--) {
        cin >> n;
        cin>>s;
        cout<<countSubStr(s)<<"\n";
    }
    return 0;
}
//nC1= combinations taken 1 at a time;
// or individual 1’s are their own start and end point.
//Then nC2 = combinations taken 2 at a time.
//Adding these two makes up nC1+nC2=n×(n+1)/2