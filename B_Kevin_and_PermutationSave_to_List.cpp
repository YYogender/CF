#include <bits/stdc++.h>
using namespace std;

#define ios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define nl cout<<"\n"
#define pb push_back
#define int long long
#define srt(v)  sort(v.begin(),v.end())
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
   int n,m;cin>>n>>m;
    vector<int>arr(n,0);
    int j=1;
    int cnt=0;
    for(int i=m-1;i<=n;i+=m)
    {
      if(cnt<n/m)
      {
        arr[i]=j;
        j++;
        cnt++;
      }
    }
    for(int i=1;i<=n;i++)
    {
      if(arr[i-1]==0)
      {
        arr[i-1]=j;
        j++;
      }
    }
    for(auto i:arr)
    {
      cout<<i<<" ";
    }
    nl;
}

int32_t main()
{
    ios;
    auto begin = std::chrono::high_resolution_clock::now();
    int t;
    t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}