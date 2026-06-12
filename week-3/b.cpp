#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void factor(int n){
  for(int i=1;i<=n;i++){
    if(n%i==0) cout<<i<<" ";
  }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    factor(n);
    return 0;
}