#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
    ll count = 0;
    for(int i=1;i<=n;i++){
        if(n%10==0){
        count++;
        n=n/10;
        }
    }
cout<<count;
    return 0;
}