//shifted pyramid
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    for(int i=1;i<=n;i++){
      //spaces
      for(int j=1;j<=(i-1);j++){
        cout<<" ";
      }

      //star
      for(int j=1;j<=i;j++){
        cout<<"x";
      }
      cout<<"\n";
    }

    return 0;
}