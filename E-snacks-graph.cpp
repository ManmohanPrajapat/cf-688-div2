#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
#define int long long int
#define float long double
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
int ans;
int functor(int s,vector<int>adj[],int par)
{
    vector<int>vect;
    for(int x:adj[s])
    {
        if(x!=par)
        vect.push_back(functor(x,adj,s));
    }
    if(vect.size()==0)
    {
        ans=max(ans,1LL);
        return 1;
    }
    if(vect.size()==1 && s!=1)
    {
        ans=max(ans,1+vect[0]);
        return 1+vect[0];
    }
    if(vect.size()==1 && s==1)
    {
        ans=max(ans,vect[0]);
            return vect[0];
    }
    sort(vect.begin(),vect.end());
    int max1=vect.back();
    if(s==1)
    {
        ans=max({ans,vect[vect.size()-2]+1LL,max1});
        return 0;
    }
    ans=max(ans,max1+1);
    return vect[0]+1;
}
void myfun()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n,x;
         cin>>n;
         vector<int>adj[n+1];
         int m=n-1;
         while(m--)
         {
             int a,b;
             cin>>a>>b;
             adj[a].push_back(b);
             adj[b].push_back(a);
         }
         ans=0;
         int p=functor(1,adj,-1);
         cout<<ans<<"\n";
    }
} 
signed main()
{
   fastio
    int t=1;
    while(t--)
        myfun();
}
