#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

ll max_value(ll a, ll b){
    if(a>b){
        return a;
    }
    return b;
}
ll min_value(ll a, ll b){
    if(a<b){
        return a;
    }
    return b;
}
//int main()
//{
//    ll t;
//    cin>>t;
//    ll n,e,h,a,b,c;
//    while (t--){
//        cin>>n>>e>>h>>a>>b>>c;
//        priority_queue<pair<ll, char> > pq;
//        pq.push(make_pair(-a,'A'));
//        pq.push(make_pair(-b,'B'));
//        pq.push(make_pair(-c,'C'));
//        ll serve_friend=0, count_friends=0, cost=0, flag=0, no_of_friends=n;
//        while (!pq.empty()){
//            ll min_price= pq.top().first * (-1);
//
//            if(pq.top().second=='A'&& e>1){
//                    serve_friend=(ll)floor((double)e / 2);
//                    count_friends+=serve_friend;
//            }
//            else if(pq.top().second=='B'&& h>2){
//                    serve_friend=(ll)floor((double)h / 3);
//                    count_friends+=serve_friend;
//            }
//            else if(pq.top().second=='C'&& (e!=0 && h!=0)){
//                    if(e>h){
//                         serve_friend=h;
//                         count_friends+=serve_friend;
//                         e-=h;
//                         h=0;
//                    }
//                    else if (h>e){
//                        serve_friend=e;
//                        count_friends+=serve_friend;
//                        h-=e;
//                        e=0;
//                    }
//                    else{
//                        serve_friend=e;
//                        e=0;
//                        h=0;
//                        count_friends+=serve_friend;
//                    }
//                }
//            if (serve_friend<=no_of_friends) {
//                cost += min_price * serve_friend;
//                no_of_friends-=serve_friend;
//            } else if (serve_friend>no_of_friends && no_of_friends>0){
//                cost += min_price * no_of_friends;
//                flag=1;
//            }
//            if (flag){
//                break;
//            }
//            pq.pop();
//        }
//        if(count_friends<n){
//            cout<<"-1"<<"\n";
//        } else{
//            cout<<"Cost is:"<<cost<<"\n";
//            cout<<"Friends:"<<count_friends<<"\n";
//        }
//    }
//    return 0;
//}
ll recur(ll n, ll e, ll h, ll A, ll B, ll C){
    if (n<=0){
        //when there are no orders
        return 0;
    }
    ll ans=1e15;
    if((n<=e) && (n<=h)) {
        //1 E 1 H
        ans = min_value(ans, n * C);
    }
    if ((3*n)<=h) {
        // H=3
        ans = min_value(ans, n * B);
    }
    if ((2*n)<=e) {
        // E=2
        ans = min_value(ans, n * A);
    }
    if(((h-n)/2 >=1) && ((h-n)/2 >= n-e)) {
        //All E&H and H 
        /*
         * price=x*(B-C)+n*C
         * if (B-C) < 0 then price will decrease with increase in x
         * if (B-C) > 0 price will decrease with decrease in x
         */
        if (B - C < 0) {
            ll temp = min_value(n - 1, (h - n) / 2);
            //temp will be the maximum value that x can take
            ans = min_value(ans, (B - C) * temp + n * C);
        } else {
            ll temp = max_value(1, (n - e));
            //temp will be the minimum value that x can take
            ans = min_value(ans, (B - C) * temp + n * C);
        }
    }
       if((e-n>=1) && (e-n>=n-h)) {
           // E=2 && H=3
           if (A - C < 0) {
               ll temp = min_value(n - 1, e - n);
               //temp will be maximum value taht x can attain
               ans = min_value(ans, (A - C) * temp + n * C);
           } else {
               ll temp = max_value(1, n - h);
               ans = min_value(ans, (A - C) * temp + n * C);
           }
       } 
       if((e/2>=1) && (e/2>=(3*n-h+2)/3)) {
           if (A - B < 0) {
               ll temp = min_value(n - 1, e / 2);
               ans = min_value(ans, (A - B) * temp + n * B);
           } else {
               ll temp = max_value(1, (3 * n - h + 2) / 3);
               ans = min_value(ans, (A - B) * temp + n * B);
           }
       }
    if ((e>=3) && (h>=4) && (n>=3)){
        ans=min_value(ans, A+B+C+recur(n-3, e-3, h-4, A,B,C));
    }
    return ans;
}
int main()
{
    ll t;
    cin>>t;
    while (t--){
        ll n, e, h,A,B,C;
        cin>>n>>e>>h>>A>>B>>C;
        
        ll ans;
        ans=recur(n ,e ,h, A ,B, C);
        if(ans==1e15){
            cout<<"-1"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}