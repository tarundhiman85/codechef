#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;  //size of income array
    int income[N];
    for(int i=0; i<N; i++){
        cin>>income[i];
    }
    sort(income,income+N);  //sort in asecendind order
    float average=0;
    int count=0;
    for(int i=1; i<N-1; i++){
        average+=income[i];
        count++;
    }
    float av=average/count;
    cout<<floor(av);
    return 0;
}