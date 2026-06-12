#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void primeNumber(int n){
  int count = 0;
  for(int i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
  if(count==2) cout<<"Prime"<<"\n";
  else cout<<"Not Prime"<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    primeNumber(n);
    return 0;
}