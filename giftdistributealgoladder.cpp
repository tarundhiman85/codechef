#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;  //total number of people
    int person[N];
    for(int i=0; i<N; i++){
        cin>>person[i];
    }
    int gift_count[N];
    gift_count[0]=person[0];         //first person will get gift according to trust value
    //int previous_count=gif
    //checking from 2nd person
    for(int i=1; i<N; i++)
    {
        if(gift_count[i-1]>person[i]){
            gift_count[i]=1;    //to oske oski trust value ke hisab se gift dediye
        }
        else{
            gift_count[i]=person[i];  //nhi to oski value he denge
        }
    }
    int initial_sum=0;
    accumulate(gift_count, gift_count+N, initial_sum);
    cout<<initial_sum;
    return 0;
}


N=5
person=[1,5,6,7,8]
gifts=[0]*N
person.sort()
#gifts[0]=person[0]
i=1
while i<N-1:
    if gifts[i-1]>=person[i]:
        gifts[i]=1
        i=i+1
    else:
        gifts[i]=person[i]
        gifts[i+1]=1;
        i=i+2
    
sum=0
for i in range(N):
    sum+=gifts[i]
print(sum)    
    