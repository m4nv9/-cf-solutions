#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    
    for(int i=1;i<=n;i++){  
    //even rows start with 1 
    //odd rows start with 0

      int start;
      if(i%2==0) start=1;
      else start=0;

      for(int j=1;j<=i;j++){
        cout<<start;
        //alternate if 0 with 1 if 1 with 0
        if(start==0) start=1;
        else start=0;
      }
      cout<<"\n";
    }
    return 0;
}