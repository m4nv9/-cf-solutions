#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //t times
    int t; cin>>t;
    while(t--){

    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    for(int i=1;i<n;i=i+2){
      swap(arr[i],arr[i-1]);
    }

    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<"\n";
    }

    return 0;
}