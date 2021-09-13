
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,k;
int n=0;
int my=0;
int iy=0;
string str;
cin>>t;
while(t--){
    cin>>n>>k;
    cin>>str;
    int res=0;
    int result=0;
    queue<int> ion;
    queue<int> m;
    for(int i=0;i<n;i++){
        //firstly take all the iron magnets in the queue till we get X
        if(str[i]=='M'){
            m.push(i);
            my++;
        }
        if(str[i]=='I'){
            ion.push(i);
            iy++;
        }
        if(str[i]=='X' || i==n-1){
            int left;
            int right;
            int s=0;
            int que;
            while(!m.empty() && !ion.empty()){
                left=min(m.front(), ion.front());
                right=max(m.front(), ion.front());
                //in between checking
                for(que=left; que<=right; que++){
                    if(str[i]==':'){
                        s++;
                    }
                }
                    int p=0;
                    p=k+1-abs(left-right)-s;
                    if(p>0){
                        result++;
                        m.pop();
                        my--;
                        ion.pop();
                        iy--;
                    }
                    else if(m.front()<ion.front()){
                        m.pop();
                        my--;
                    }
                    else{
                        ion.pop();
                        iy--;
                    }
                }
                while(!m.empty()){
                    m.pop();
                    my--;
                }
                while(!ion.empty()){
                    ion.pop();
                    iy--;
                }
            }
    }
            cout<<result<<"\n";
        
    }

return 0;
}