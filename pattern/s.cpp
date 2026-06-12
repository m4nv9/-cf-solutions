#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  //upper half
  int n; cin>>n;
      //sq
    for(int i=n;i>=2;i--){
      //star
      for(int j=1;j<=i;j++){
        cout<<"*";
      }
      //space
      for(int j=1;j<=(2*n-2*i)+1;j++){
        cout<<" ";
      }
      //star
      for(int j=1;j<=i;j++){
        cout<<"*";
      }
      cout<<"\n";
    }
//lower half
  //sq
    for(int i=1;i<=n;i++){
      //star
      for(int j=1;j<=i;j++){
        cout<<"*";
      }
      //space
      for(int j=1;j<=(2*n-2*i)+1;j++){
        cout<<" ";
      }
      //star
      for(int j=1;j<=i;j++){
        cout<<"*";
      }
      cout<<"\n";
    }
    return 0;
}