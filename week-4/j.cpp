#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
      //two pointer approach
      int n; cin>>n;
     //increasing order
     for(int i=1;i<=n;i=i+2){
      cout<<i<<" ";
     }
    
      //start
     int start;
     if(n%2==0) start = n;
     else start = n-1;

      //decreasing order
      for(int i=start;i>=1;i=i-2){
        cout<<i<<" ";
      }
      cout<<"\n";
    }
    return 0;
}