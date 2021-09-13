#include "bits/stdc++.h"
using namespace std;
typedef  long long int ll;


ll max_value(ll a, ll b){
    if(a>b){
        return a;
    }
    return b;
}

struct Point{
    ll x;
    ll y;
};

ll orientation(Point p, Point q, Point r)
{
    ll val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;
    return (val > 0)? 1: 2;
}
Point secondofst(stack<Point> &s){
    Point first=s.top();
    s.pop();
    Point second=s.top();
    s.push(first);
    Point p1={second.x, second.y};
    return p1;
}

ll diff(ll a, ll b)
{
    if(a>b){
        return a-b;
    }
    return b-a;
}

int main() {

//        ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//#ifndef ONLINE_JUDGE
//    freeopen("input.txt", "r", stdin);
//    freeopen("output.txt","w", stdout);
//#endif
    int t;
    cin >> t;   //test case
    ll n;
    while (t--) {
        cin >> n;
            vector<Point> h(n);
            ll x;
            for (ll i = 0; i < n; i++) {
                cin >> x;
                h[i] = {i+1, x};
            }
            stack<Point> s;
            s.push(h[0]);
            s.push(h[1]);
            for (ll i = 0; i < n; i++)
            {
                if (s.size() < 2) {
                    s.push(h[i]);
                }
                else {
                    if(orientation(secondofst(s), s.top(), h[i]) == 1)
                    {
                        s.push(h[i]);
                    }
                    else {
                        while (s.size() >= 2 && (orientation(secondofst(s), s.top(), h[i]) != 1)) {
                            s.pop();
                        }
                        s.push(h[i]);
                    }
                }
            }
            ll maxi=1;
            while (s.size() >= 2) {
                Point pt = s.top();
                s.pop();
                Point qt = s.top();
                maxi = max_value(maxi, diff(pt.x , qt.x));
            }
            cout << maxi << "\n";

        //        stack<ll>> st;
//        st.push(0);
//        ll ans=0;
//        for(ll i=1; i<n; i++){
//            if(h[i]>=a[0]){
//                st.push(i);
//                ans=i;
//                break;
//            }
//        }
//        if(i<n-1){
//            for(i=i+1; i<n; i++){
//                if(h[i]>=h[st.top()]){
//
//                }
//            }
//        }
        //brute force
//        ll i = 0;
//        vector<pair<ll, ll>> v;
//        if (n < 3) {
//            cout << "1" << "\n";
//        } else {
//            bool flag;
////            while (i < n) {
//                for(; i<n; i++){
//                Point p1 = {i, h[i]};
//                //for(ll j = n-1; j > i; j--) {
//                flag=false;
//                ll j=n-1;
//                while (j > i) {
//                    Point q1 = {j, h[j]};
//                    //point p1 and p2 form a line
//                    for (ll k = i + 1; k < j; k++) {
//                        Point p2 = {k, h[k]};
//                        Point q2 = {k, 0};
//                          if(((double)(p2.y-p1.y)/(p2.x-p1.x)) > ((double)(q1.y-p1.y)/(q1.x-p1.x))){    //if intersect
//                              flag=true;
//                              break;
//                          }
//                          else{
//                              flag=false;
//                          }
//                    }
//                    if (flag){
//                        j--;
//                    }
//                    else{
//                        v.push_back({j,i});
//                        j--;
//                    }
//                }
//            }
//            if (v.size() > 0) {
//                ll max = 1;
//                for (ll i = 0; i < v.size(); i++) {
//                    max = max_value(max, v[i].first - v[i].second);
//                }
//                cout << max << "\n";
//            } else {
//                cout << "1" << "\n";
//            }
//        }
    }
    return 0;
}
        //my previous approach
//        ll maxi=0;
//        ll dp[n+1][n+1];
//        memset(dp, 0, sizeof(dp));
//        for (ll i = 0; i < n; i++) {
//            //think about lower bound and upperbound
//            //why on i=2 some slope error that is same slope
//            for (ll j = i+1; j < n; j++) {
//                    //dp[i][j]=h[j-1];    //max height
//                    ll temp=(h[j]-h[i])/j-i;
//                    if(j-i==1){
//                        dp[i][j]=(h[j]-h[i])/1;   //slope storing
//                        maxi=max_value(maxi,1);
//                    }
//                    else if(dp[i][j-1]>(h[j]-h[i])/j-i) {      //if previous slope is greater then current slope
//                        dp[i][j] = dp[i ][j - 1];
//                    }
//                    else{
//                        dp[i][j]=(h[j]-h[i])/j-i;
//                        maxi=max_value(maxi,j-i);
//                    }
//                }
//            }
//        cout<<maxi<<"\n";
//    }
//    return 0;
//}