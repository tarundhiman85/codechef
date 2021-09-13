#include<bits/stdc++.h>
using namespace std;
vector<int> programpr(int n, int k) 
{ 

    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 

        if (prime[p] == true) 
        { 
 
            for (int i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    int v[n];
    // Print all prime number 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          v[p]=p;
    vector<int> v2;
    for(int i=0; i<k; i++){
        v2.push_back(v[i]);
    }      
    return v2;       
} 
  
int main(){
    int t;
    int n;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    vector<int> a;
    a=programpr(100000,n);
    for(int i=0; i<n; i++){
        if((i+1)!=b[i])
        {
            //a[i+1]=a[b];
            a[i]=a[b[i]-1];
        }
        else{
            continue;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    }
    return 0;
}

