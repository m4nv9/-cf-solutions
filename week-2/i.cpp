#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
ll fac = 1;
    if(n==0 || n==1) {
    cout<< 1;
    return 0;
    }
    else{
      int i=2;
      while(n>=i) {
      fac = fac*i;
      i++;
      }
    }
    cout<<fac;
    return 0;
}