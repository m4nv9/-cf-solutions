//search 
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;
    int x; cin>>x;
    int key = x;
    int arr[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>arr[i][j];
      }
    }
   bool flag = false;
    //search
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(arr[i][j]==key){
          flag = true;
          break;
        }
      }
    }
    if(flag==true) cout<<"true";
    else cout<<"false";

    return 0;
}