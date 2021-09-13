#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n;
    while(t--){
        cin>>n;
    int c[n];    
    for(int i=0; i<n; i++)
    {
        cin>>c[i];
    }    
    // //checking if all the elements are same or not if not then we break
    // bool flag=true;
    // int k=c[0];
    // for(int i=1; i<n; i++){
    //     if(c[i]==k){
    //         flag=true;
    //     }
    //     else{ 
    //         flag=false;
    //         break;
    //     }
    // }
    int diff=0;
    int d;
    int mm=0;
    //if flag is false original constraint
    if((n!=1 && n!=2)){
         sort(c, c + n, greater<int>());
        int let=c[0];
        int em=c[1];
        int m=0; //for minimum
        //loop
        int i=2;
        while (i!=n-1)
        {
            m=min(let, em);
            if(m==let){
             let+=c[i];
            }
            else if(m==em){
              em+=c[i];
            }
            i++;
        }
        int ans=max(let, em);
        cout<<ans<<"\n"; 
    }
    //if flag is true subtask 1 all element equal
    // else if(flag==true && (n!=1 && n!=2)){
    //     if(n==3){
    //         cout<<c[0]+c[1]<<"\n";      //printing time of remaing also
    //     }
    //     else{
    //         cout<<c[0]<<"\n";  //printing the exact time
    //     }
    // }
    else{
        if(n==1){
        cout<<c[0]<<"\n";
        }
        else{
            sort(c, c + n);
            cout<<c[n-1]<<"\n";   //printing the last element
        }
    }
}
return 0;
}