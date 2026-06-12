//wave 2
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

    for(int j=0;j<m;j++){
      //even j
      if(j%2==0){
        //up to down
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
      }
      else{ //odd j
        //down to up
        for(int i=(n-1);i>=0;i--){
          cout<<arr[i][j]<<" ";
        }
      }
    }

    return 0;
}