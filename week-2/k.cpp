#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
    if(n==0) cout<<0;
    while(n!=0){
      cout<<n%10;
      n=n/10;
    }
    
    return 0;
}