
#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int main()
{
    ll t=1;
    cin>>t;
    ll n;
    while(t--)
    {
    cin>>n;
    ll f[n] ,c[n];
    for(int i=0; i<n; i++)
      {
          cin>>f[i];
      }
    for(int i=0; i<n; i++)
      {
          cin>>c[i];
      }
    vector<pair<ll,ll>> vp;  
    for(int i=0; i<n; i++){
        vp.push_back({c[i],f[i]});
    }
    sort(vp.begin(), vp.end());
    //sorting the vetor according to cost
    ll rem=n;    //Exact distance
    ll ans=0;    //incremented ans
    ll i=0; 
    /* 2 possibility ho skti he jo 
    1.remaing distance he wo greater ya equal hoo MAX capacity of ith car se to hm TEL daal denge
     ---cost add krdo i.e (costperltr)*(Max_capacity) aur decrment krdo distance i.e REM=REM-(fuel added)
    2.agr remaning distance kmm he MAX capacity se to hm jitni tank mein jgh he otna tel daalenge
    Why ? suppose car has 10L fuel capacity and we required only 2 litre then why we need to fill with 10L , fill only 3L*/
    while(i<n)
    {
        ll fuel = vp[i].second; //max fuel we can fill up for cuureent car
        ll cst = vp[i].first;  // per L fuel cost
        if(fuel) // fuel must be there
        {
            if(fuel<=rem) // if fuel is less than remaining distance then fill the current car completely
            {
                rem-=fuel;
                ans += (fuel*cst);
            }
            else
            {
                ans += (rem*cst); // if fuel is more then remaining distance the fill only required petrol
                // suppose car has 10L fuel capacity  and we required only 2 litre
                // then why we need to fill with 10L , fill only 3L
                rem=0;
                break;
            }
        }
        i++;
        if(rem==0) 
            break;
    }
    
    cout<<ans<<"\n";
  }
    return 0;
}