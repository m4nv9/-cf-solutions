#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b,c,d,x;
    cin>>a>>b>>c>>d;
    x = (a*b)-(c*d);
    cout<<"Difference = "<<x;
    return 0;
}