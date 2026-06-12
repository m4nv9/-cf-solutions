#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //instead of conditionals use min and max built in
    int a,b,c; cin>>a>>b>>c;
    int mn = min({a,b,c});
    int mx = max({a,b,c});

    cout<<"Min"<<" = "<<mn<<"\n";
    cout<<"Max"<<" = "<<mx<<"\n";
}