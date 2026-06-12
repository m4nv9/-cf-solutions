//row min
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

    for(int i=0;i<n;i++){
      //assume min
      int min = arr[i][0]; //in single row
      for(int j=0;j<m;j++){
        if(arr[i][j]<min){
          min = arr[i][j]; //updating
        }
      }
      cout<<min<<" ";
      
    }

    return 0;
}