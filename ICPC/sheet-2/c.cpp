//replacement
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

    for(int i=0;i<n;i++){
      if(arr[i]<0) arr[i]=2;
      else if(arr[i]==0) arr[i]=0;
      else arr[i]=1;
    }

    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }

    return 0;
}