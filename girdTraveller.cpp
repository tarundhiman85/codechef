#include "bits/stdc++.h"
using namespace std;
int dp[20][20];
int grid_Travelller(int a, int b){
    if (dp[a][b]!=-1){
        return dp[a][b];
    }
    if(a==0 || b==0){
        return dp[a][b]= 0;
    }
    if(a==1 && b==1){
        return dp[a][b]=1;
    }
    //imp grid_traveller(a,b)==grid_traveller(b,a)
//    if you take a choice ur area of think will also reduce depending on the move .
//    and then then then comes to base case
//     how the dimension change that is something ++ or --
    //mistake 1 dont dont simulataneous 2 directions
    return dp[a][b]=grid_Travelller(a-1,b)+grid_Travelller(a,b-1);
}
int main(){
    memset(dp,-1, sizeof(dp));
    cout<<grid_Travelller(18,18);
    return 0;
}
