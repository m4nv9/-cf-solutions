#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void printFactors2(int n){
  for(int i=n;i>=1;i--){
    if(n%i==0) cout<<i<<" ";
  }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    printFactors2(n);
    return 0;
}