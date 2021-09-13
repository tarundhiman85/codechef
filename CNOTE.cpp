#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y,k,n;
    while (t--){
        cin>>x>>y>>k>>n;
        //vector<pair<int,int>> v;
        int u,o;
        priority_queue<pair<int,int>> pq;
        for (int i = 0; i < n; ++i) {
            cin>>u>>o;
            pq.push({u,o});
        }
        if(y>=x){
         cout<<"LuckyChef\n";
        }
        else {
            int sum_pages = 0;
            int need_pages = (x - y);
            //while (!pq.empty()) {
                // all the pages will be filled with limit of k
                while ((sum_pages<need_pages)&&(!pq.empty()))
                {
                    if(k>=pq.top().second)
                    {
                        sum_pages += pq.top().first;
                        k -= pq.top().second;
                    }
                    pq.pop();
                }
            //}
             //check condition
             //prev will be covered by the difference
            if(sum_pages>=need_pages){
                cout<<"LuckyChef\n";
            }
            else{
                cout<<"UnluckyChef\n";
            }
        }
    }
    return 0;
}