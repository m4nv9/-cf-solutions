//max 2d
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>arr[i][j];
      }
    }
    int ans = arr[0][0];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(arr[i][j]>ans){
          ans=arr[i][j];
        }
      }
    }
    cout<<ans;
    return 0;
}