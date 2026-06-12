//sort numbers
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b,c;
    cin>>a>>b>>c;

    //ascending order

    if(a<=b && a<=c) cout<<a<<"\n";
    else if(b<=a && b<=c) cout<<b<<"\n";
    else cout<<c<<"\n";

    cout<<a<<"\n"<<b<<"\n"<<c;

    return 0;
}