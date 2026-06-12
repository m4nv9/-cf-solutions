#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        cout<<"*";
      }
      cout<<"\n";
    }

    return 0;
}