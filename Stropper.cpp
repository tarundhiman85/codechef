#include <iostream>
#include <iostream>
#include <iterator>
#include <vector>
#include <cstdlib>
#include <iostream> 
#include <queue> 
#include <bits/stdc++.h>
using namespace std; 

int slide(string s, int size,int no,int nz,vector<int> l,int so,int se,int n)
{
  set<pair<pair<int,int>,pair<int,int>>> sew;
  sew.insert(make_pair(make_pair(no,nz),make_pair(so,se)));
 
  for(int i=size; i<n; i++)
  {
    if(s[i-size]=='1')
    {
      l.erase(l.begin());
      int t=se;
      se=so;
      so=t;
      no-=1;
    }
    else
    {
      nz-=1;
      l[0]-=1;
      se-=1;
    }
    if(s[i]=='1')
    {
      no+=1;
      l.push_back(0);
    }
    else
    {
      nz+=1;
      l[l.size()-1]+=1;
      if(l.size()%2==1)
      {
        se+=1;
      }
      else
      {
        so+=1;
      }
    }
    sew.insert(make_pair(make_pair(no,nz),make_pair(so,se)));
  }
  return sew.size();
}
int substring(string s,int n,int len)
{
  vector<int> l;
  int rt=0,no=0,nz=0,so=0,se=0,cur=0;
  for(int i=0;i<n;i++)
  {
    if (s[i]=='0')
    {
      if (cur%2==0)
        se+=1;
      else
        so+=1;
      rt+=1;
      nz+=1;
    }
    else
    {
      l.push_back(rt);
      rt=0;
            cur+=1;
            no+=1;
        }
    }
    l.push_back(rt);
    return slide(s,n,no,nz,l,so,se,len);
}
void solve()
{
  string str;
  cin>>s;
  int ans=0;
  for(int i=0;i<s.size();i++)
  {
    ans+=substring(s,i+1,s.size());
  }
  cout<<ans<<endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    int c=0;
    cin>>t;
    while(t--)
    {
      solve();
      c+=1;
    }
    return 0; 
}

#include <cstdlib>
#include <bits/stdc++.h>
using namespace std; 
int sliding_window(string str, int size,int nu,int nez,vector<int> vec,int p,int r,int n)
{
  set<pair<pair<int,int>,pair<int,int>>> set;
  set.insert(make_pair(make_pair(nu,nez),make_pair(p,r)));
  int k=0;
  for(int i=size; i<n; i++)
  {
    if(str[i-size]=='1')
    {
      vec.erase(vec.begin());
      k=r;
      r=p;
      p=k;
      nu=nu-1;
    }
    else
    {
      nez=nez-1;
      vec[0]=vec[0]-1;
      r=r-1;
    }
    if(str[i]=='1')
    {
      nu=nu+=1;
      vec.push_back(0);
    }
    else
    {
      nez=nez+1;
      vec[vec.size()-1]+=1;
      if(vec.size()%2==1)
      {
        r=r+1;
      }
      else
      {
        p=p+1;
      }
    }
    set.insert(make_pair(make_pair(nu,nez),make_pair(p,r)));
  }
  return set.size();
}
int find_substring(string str,int n,int len)
{
  vector<int> vec;
  int ret=0,number=0,nez=0;
  int v=0,u=0,current=0;

  for(int i=0;i<n;i++)
  {
    if (str[i]=='0')
    {
      if (current%2==0)
      {
        u=u+1;
      }
      else
      {
      v=v+1;
      ret=ret+1;
      nez=nez+1;
      }
    }
    else
    {
      vec.push_back(ret);
      ret=0;
      current=current+1;
      number=number+1;
    }
    }
    vec.push_back(ret);
    return sliding_window(str,n,number,nez,vec,v,u,len);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    int c=0;
    cin>>t;
    while(t--)
    {
      string str;
      cin>>str;
      int result=0;
      for(int j=0; j<str.size(); j++)
      {
      result=result+find_sub_string(str, j+1, str.size());
      }
      cout<<result<<endl;
    }
    return 0; 
}