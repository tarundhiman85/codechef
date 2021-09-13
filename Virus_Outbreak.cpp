#include "bits/stdc++.h"
using namespace std;
bool isSubSequence(char str1[], char str2[],
                   int m, int n)
{

    // Base Cases
    if (m == 0)
        return true;
    if (n == 0)
        return false;

    // If last characters of two
    // strings are matching
    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);

    // If last characters are
    // not matching
    return isSubSequence(str1, str2, m, n - 1);
}
int main(int argc, char *a[])
{
    string v;
    cin>>v;
    int n;
    cin>>n;
    while (n--){
        string s1;
        cin>>s1;
        char arr[v.length()+1];
        strcpy(arr, v.c_str());
        char arr1[s1.length()+1];
        strcpy(arr1,s1.c_str());
        if (isSubSequence(arr1, arr, s1.length(), v.length()))  cout<<"POSITIVE\n";
        else cout<<"NEGATIVE\n";
    }
    return 0;
}
