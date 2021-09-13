#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin>>t;
    int size;
    while (t--)
    {
        cin>>size;
        int array[size];
        int flag=0;
        for (int i = 0; i < size; i++)
        {
            cin>>array[i];
        }
        int count=0;
        sort(array, array+size);
        for (int i = 0; i < size; i++)
        {

            if (array[i] > (i + 1))
            {
                flag=1;
            }
            else
            {
                count =count+ (i + 1) - array[i];
            }
        }
        if(flag){
            cout<<"Second"<<"\n";
        }
        else
        {
            if (count % 2 != 0) {
                cout << "First" <<"\n";
            }
            else {
                cout << "Second" <<"\n";
            }
        }
    }
    return 0;
}