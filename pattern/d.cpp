#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;

    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if(i==1||i==n||j==1||j==n){
          cout<<"*";
        }
        else{
          cout<<" ";
        }
      }
      cout<<"\n";
    }
    return 0;
}