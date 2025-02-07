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
   int n;cin>>n;
   set<int>crr;
   vector<int>arr(n);
   vector<int>brr(n);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
    crr.insert(arr[i]);
   }
   
   set<int>drr;
   for(int i=0;i<n;i++)
   {
    cin>>brr[i];
    drr.insert(brr[i]);
   }
   
   if(crr.size()>=3 || (crr.size()==2 && drr.size()>=2) || (crr.size()==1 && drr.size()>=3))
   {
    cout<<"YES";nl;
   }
   else
   {
    cout<<"NO";nl;
   }
   
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