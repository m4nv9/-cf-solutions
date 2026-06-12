#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
     ll reverse=0;

    while(n!=0){
      reverse = (reverse*10)+ (n%10);
      n=n/10;
    }
    cout<<reverse<<"\n";

    return 0;
}