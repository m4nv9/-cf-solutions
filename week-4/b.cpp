//sum of arr

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    ll sum = 0;
    //loop through arr and sum arr elements arr[i]
    for(int i=0;i<n;i++){
      sum = sum+arr[i];
    }

    cout<<sum;

    return 0;
}