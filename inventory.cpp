//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    if(n==1){
//        cout<<"1\n";
//    }
//    else {
//        unordered_map<int ,int> map;
//        int arr[n+1];
//        arr[0]=0;
//        for (int i = 1; i <=n; i++) {
//            cin >> arr[i];
//            map[arr[i]]++;
//        }
//        for (int i = 1; i <= n; i++) {
//            if (map[arr[i]] == 1 && arr[i] <= n) {
//                cout << arr[i] << " ";
//            }
//                //if count>1
//            else if (map[arr[i]] > 1 && arr[i] <= n) {
//                map[arr[i]]--;   //decrease the count by -1
//                if (map.count(arr[i] - 1) < 1 && arr[i] - 1 > 0) {    //if somehow this exist
//                    map[arr[i]-1]++;
//                    cout << arr[i] - 1 << " ";
//                } else if (map.count(arr[i] + 1) < 1 && arr[i] + 1 <= n) {
//                    cout << arr[i] + 1 << " ";
//                    map[arr[i]+1]++;
//                }
//            }
//        }
//        for(int i=1; i<=n; i++){
//            if(map.count(i)<1){
//                cout<<i<<" ";
//            }
//        }
//        cout << "\n";
//    }
//    return 0;
//}

//ALOGRITHM
//create 2 arrays that is f[] and a[]
//f[] tells we have visited the element just like hasmap  [x] is just like a key
//        a[] telss we have putted the vlaue at a[i]
//
//create a loop from 1 to n
//
//if the value of f[x] is 0 and less then n
//        then put the value of x in a[i]
//and create the value of f[x]=1
//else
//put a[i]=0
//
//create a vector v and on the loop put the index values iff f[i]==0 (basically for 1 to n if something left)
//
//In the next loop from 1 to n if a[i]==0 (means something  missing from 1 to n) then we simply give the value
//of v[j++] in a[i]  ex if j=0 the j++ =1 that is v[1]  means always next in v
//
//
//        learning we can create big size arrays and use indexes as the values 1 to n if given and this arrays act as a function
//        and also given array act as a hashmap

#include<bits/stdc++.h>
using namespace std;
int main()
{
//Algorithm
    long int i,j,n,x,m,a[100001],f[100001];
    while(cin>>n)
    {
        memset(f,0, sizeof(f));
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(f[x]==0&&x<=n)
            {
                a[i]=x;
                f[x]=1;
            }
            else
                {
                a[i] = 0;
            }
        }
        vector<long long>v;
        for(i=1;i<=n;i++)
        {
            if(f[i]==0) {
                v.push_back(i);
            }
        }
        j=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]==0)
            {
                a[i]=v[j++];
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}