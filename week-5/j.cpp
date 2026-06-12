//boundary traversal
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
    //i=0;j=change
    for(int j=0;j<m;j++){
      cout<<arr[0][j]<<" ";
    }
    //i=1 j=fixed
    for(int i=1;i<n;i++){
      cout<<arr[i][m-1]<<" ";
    }
    //j=change, i=fixed
    //safety check to avoid repetition
    if(n>1){
      for(int j=(m-2);j>=0;j--){
      cout<<arr[n-1][j]<<" ";
    }
    }
    //j=fixed i=change
    if(m>1){
 for(int i=(n-2);i>0;i--){
      cout<<arr[i][0]<<" ";
    }
    }
//edge case =
    return 0;
}