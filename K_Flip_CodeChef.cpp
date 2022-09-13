#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
ll power(ll x, ll y){
    if(y==0)
        return 1;
    ll ans=power(x,y/2);
    if (y%2==0)
        return (ans*ans)%mod;
    else
        return (x*ans*ans)%mod;
}

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        string s; cin>>s;
        if(n==k)
        cout<<2<<"\n";
        else if(k%2==1)
        cout<<power(2,n)<<"\n";
        else
        cout<<power(2,n-1)<<"\n";
    }
	return 0;
}