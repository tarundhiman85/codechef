#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
ll check(ll n) 
{ 
    if(n==0){
        return 1;
    }
    ll k = (ll)(log2(n)); 
  
    return (ll)(pow(2, k)); 
} 
int main()
{
    int t;
    cin>>t;
    ll x,n,X_count=0,p,q=0;
    while (t--)
    {
        cin>>n>>x;
        ll A[n];
        for(ll i=0; i<n; i++){
            cin>>A[i];
        }
        ll i=0;
        ll j=1;
        X_count=0;
        int counter=0;
        if(n>2){
        while (X_count<x)
        {
            while(A[i]!=0 && X_count<x){
                p=check(A[i]);
                A[i]=A[i]^p;
                j=i+1;
                counter=0;
                while(j<=(n-2)){
                    q=A[j]^p;
                    if(q<A[j]){
                        A[j]=q;
                        counter=1;
                        break;
                    }
                    j=j+1;
                }
                if(counter!=1){
                    A[n-1]=A[n-1]^p;
                }
                X_count+=1;
            }
            i+=1;
            if(i==(n-1)){
                break;
            }
        }
        for(ll i=0; i<n; i++){
            cout<<A[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        X_count=0;
        i=0;
        j=1;
        ll y=0;
        ll k=0;
        while(X_count<x)
        {
            while(A[i]!=0 && X_count<x){
                p=check(A[i]);
                A[i]=A[i]^p;
                y=A[i];
                A[i+1]=A[i+1]^p;
                k=A[i+1];
                X_count=X_count+1;
            }
                if(X_count!=0 && (x-1-X_count)%2==1){
                    break;
                }
                else if(X_count!=0 && (x-1-X_count)%2==0){
                    p=check(A[i]);
                    A[i]=A[i]^p;
                    y=A[i];
                    A[i+1]=A[i+1]^p;
                    k=A[i+1];
                    break;
                }
            }
        }
    }
    
    return 0;
}