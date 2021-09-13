#include <iostream>
using namespace std;

int main() {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int q=s.size();
        if(q%2==1)
            cout<<-1;
        else
        {
            int l=0,c=0;
            for(int i=0;i<q;i++)
            {
                if(s[i]=='{')
                    l++;

                if(s[i]=='}')
                    l--;

                if(l<0)
                {
                    l=1;
                    c++;
                }

            }
            c=c+l/2;
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}