//rows with max 1s
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
    int bestRow = -1;
    int maxCount = 0;
    for(int i=0;i<n;i++){
      //count 1s
      int count = 0;
      for(int j=0;j<m;j++){
        if(arr[i][j]==1){
          count++;
        }
      }
      //compare and update
      if(count>maxCount){
        maxCount=count;
        bestRow=i;
      }
    }
    cout<<bestRow;
    return 0;
}