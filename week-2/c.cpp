#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int i=2;
    while(i<=n){
      if(i%2==0){
        cout<<i<<" ";
        i+=2;
      }
    }
    

    return 0;
}