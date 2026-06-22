//summation
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    ll sum = 0;

    for(int i=0;i<n;i++){
      sum = sum + arr[i];
    }
    //instead of 
    if(sum<0) sum=-sum;
    cout<<sum;
    return 0;
}