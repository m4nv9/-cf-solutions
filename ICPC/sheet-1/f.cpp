#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin>>n>>m;
    //modifying the digits
    n=n%10;
    m=m%10;
    cout<<n+m;

    return 0;
}