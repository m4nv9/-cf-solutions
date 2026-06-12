#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

  int n; cin>>n;
  
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
  
    return 0;
}