#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
#define int long long int
#define float long double
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
void myfun()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n,m,x;
         cin>>n>>m;
         int sum=n+m;
         set<int>sect;
         for(int i=1;i<=n;i++)
         {
             cin>>x;
             sect.insert(x);
         }
         for(int i=1;i<=m;i++)
         {
             cin>>x;
             sect.insert(x);
         }
         sum-=sect.size();
         cout<<sum<<"\n";
    }
} 
signed main()
{
   fastio
    int t=1;
    while(t--)
        myfun();
}
