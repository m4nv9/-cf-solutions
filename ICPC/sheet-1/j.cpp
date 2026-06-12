#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b;
    cin>>a>>b;
    if(a%b==0 || b%a==0) cout<<"Multiples";
    else cout<<"No Multiples";

    return 0;
}