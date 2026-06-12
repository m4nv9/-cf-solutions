#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int i=1;
    while(i<=10){
      cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
      i++;
    }

    return 0;
}