
#include <bits/stdc++.h> 

using namespace std;

int main(){
    int t;
    int n;
    cin>>t;
    while(t--){
      cin>>n;
      int f[n];    //gasoline of each car
      for(int i=0; i<n; i++)
      {
          cin>>f[i];
      }
      if(f[0]==0){
          cout<<"0"<<"\n";
      }
      else{
          //main code
          int d=0;
          int track=0;
          bool flag=false;
          for(int i=1; i<n; i++){
              //go through 1 to n
              f[0]+=f[i];   //update car 1 gasoline
              f[0]--;       //decrement car 1 gasoline by 1
              d++;          //increment distance by 1
              track=f[0];
              if(f[0]==0){
                  flag=true;
                  break;
              }
          }
          if(flag){
              cout<<d<<"\n";
              //int k=d+1;
          }
          else{
          f[0]--;   //decrement again
          track=f[0];
          cout<<f[0]+d+1<<"\n";
          int res=f[0]+d+1;
          }
      }
      //o/p single n
    }
    return 0;
}