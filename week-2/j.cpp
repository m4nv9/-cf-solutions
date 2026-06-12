#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x,n; 
    cin>>x>>n;
    ll ans = 1;
    int i = 1;
    while(i<=n){
     ans = ans*x;
     i++;
    }
    //better for(int i = 0; i < n; i++)
    cout<<ans<<"\n";
    return 0;
}