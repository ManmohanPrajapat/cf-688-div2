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
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    int x=0;
    for(int i=2;i<=n;i++)
    {
        x+=abs(arr[i]-arr[i-1]);
    }
    int y=0;
    for(int i=2;i<n;i++)
    {
        y=max({y,abs(arr[i]-arr[i-1])+abs(arr[i]-arr[i+1])-abs(arr[i-1]-arr[i+1])});
    }
    y=max({y,abs(arr[1]-arr[2]),abs(arr[n-1]-arr[n])});
    cout<<x-y<<"\n";
} 
signed main()
{
   fastio
    int t;
    cin>>t;
    while(t--)
        myfun();
}
