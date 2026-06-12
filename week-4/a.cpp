//arr reverse

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

  //arr size
    int n;
    cin>>n;

    int arr[n];

    //arr input
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    //reverse
    for(int i=n-1;i>=0;i--){
      cout<<arr[i]<<" ";
    }

    return 0;
}