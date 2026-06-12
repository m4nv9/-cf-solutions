#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b,c;
    cin>>a>>b>>c;
    //finding min
    if(a<=b && a<=c) cout<<a<<" ";
    else if(b<=a && b<=c) cout<<b<<" ";
    else cout<<c<<" ";

    //finding max
    if(a>=b && a>=c) cout<<a;
    else if(b>=a && b>=c) cout<<b;
    else cout<<c;
    

    return 0;
}