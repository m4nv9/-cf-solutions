//count good numbers
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
    int count = 0;
    for(int i = 1;i<=n;i++){
      ll x; cin>>x;
      if(x!=0) continue;
       if((x%45==0) || (18%x==0)){
        count++;
      } 
    }
    cout<<count;
    return 0;
}