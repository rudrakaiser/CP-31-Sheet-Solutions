#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define ld long double
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define fo(i, n) for(int i=0;i<n;i++)
#define rfo(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,a,b) for(int i=a;i<b;i++)

#define all(x) x.begin(),x.end()
#define vin(vec) for(auto &it:vec)cin>>it
#define vout(vec) for(auto &it:vec)cout<<it<<" "

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" = "<<x<<"\n"
#else
#define debug(x)
#endif

#ifndef ONLINE_JUDGE
template<typename T>
void debugvec(const vector<T> &v) {
    cerr << "[ ";
    for (auto &x : v) cerr << x << " ";
    cerr << "]\n";
}
#endif

const int MOD = 1e9 + 7;
const ll INF = 2e18;

ll gcdll(ll a, ll b) {return b==0?a:gcdll(b,a%b);}
ll lcmll(ll a, ll b) {return a/gcdll(a,b)*b;}

void solve() {
    int n; cin >> n;
    cout << (n % 3 == 0 ? "Second\n" : "First\n");
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0); ll t; cin >> t; while(t--) solve();
}