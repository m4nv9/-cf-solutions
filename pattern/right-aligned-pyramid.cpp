#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    
   for(int i=1;i<=n;i++){
    //space 
    for(int j=1;j<=(n-i);j++){
      cout<<" ";
    }
    for(int k=1;k<=i;k++){
      cout<<"*";
    }
    cout<<"\n";
   }

    return 0;
}