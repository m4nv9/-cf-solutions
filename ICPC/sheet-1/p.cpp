#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x;
    cin>>x;
    //taking out first digit
    while(x>=10){
      x=x/10;
    }
    if(x%2==0) cout<<"EVEN";
    else cout<<"ODD";

    return 0;
}