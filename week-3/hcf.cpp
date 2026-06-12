//highest common factor
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin>>a>>b;
    int ans = 1;
    for(int i=1;i<=a;i++){  //start from 2 to avoid division by 0 
      if(a%i==0 && b%i==0)
       ans=i; //updating the current highest factor
    }
      cout<<ans;
    return 0;
}