#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void hcf(int a, int b){
for(int i=1;i<=a;i++){
  if(a%i==0) cout<<i<<" ";
}
cout<<"\n";
for(int i=1;i<=b;i++){
  if(b%i==0) cout<<i<<" ";
}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

  int a,b; cin>>a>>b;    
    hcf(a,b);
        return 0;
}