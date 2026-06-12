//duplicate number
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //each number is present once
    //one number is present twice
    //check count

    //t test cases
    int t; cin>>t;
    while(t--){
      //array
      int n; cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      //traverse through array
      int ans = 0;
      for(int i=0;i<n;i++){
        //check count
        int count = 0;
        int target = a[i];
        for(int j=0;j<n;j++){
          if(a[j]==target){
            count++;
          }
        }
        if(count == 2){
          ans = a[i];
          break;
        }
      }
      cout<<ans<<"\n";
    }

    return 0;
}