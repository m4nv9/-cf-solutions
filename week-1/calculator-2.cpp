#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m; cin>>n>>m;
    cout<<n<<" + "<<m<<" = "<<n+m<<"\n\n";
    cout<<n<<" - "<<m<<" = "<<n-m<<"\n\n";
    cout<<n<<" * "<<m<<" = "<<n*m<<"\n\n";
    cout<<n<<" / "<<m<<" = "<<n/m<<"\n\n";
    cout<<n<<" % "<<m<<" = "<<n%m;

    return 0;
}