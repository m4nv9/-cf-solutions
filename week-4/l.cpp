//missing number
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //t test cases
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
    int a[n];
    int ans = 0;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    //traversing through array
    for(int i=0;i<n;i++){
      //check is a[i] is answer by maintaining a count
      int count = 0;
      int target = a[i]; 
      //traverse in array
      for(int j=0;j<n;j++){
        //compate
        if(a[j]==target){
          count++;
        }
      }
      //check count
      if(count==1){
        ans = a[i];
        break;
      }
    }
    cout<<ans<<"\n";
    }
    return 0;
} 