#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        int x=(w2-w1);
        int max_Increase=x2*m;
        int min_Increase=x1*m;
        if(min_Increase<=x && max_Increase>=x){
            cout<<"1\n";
        }
        else{
            cout<<"0\n";
        }
    }
    return 0;
}