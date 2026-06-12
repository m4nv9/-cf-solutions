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

    //wave
    //row order
    for(int i =0;i<n;i++){
      //left to right
      if(i%2==0){
        for(int j=0;j<m;j++){
          cout<<arr[i][j]<<" ";
        }
      }
      else{
          //right to left
          for(int j=(m-1);j>=0;j--){
            cout<<arr[i][j]<<" ";
          }
        }
    }

    return 0;
}