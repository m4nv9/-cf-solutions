//arrow
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
  //upper half
    for(int i=1;i<n;i++){
      //space (i-1)
      for(int j=1;j<=(i-1);j++){
        cout<<" ";
      }
      //star(i)
      for(int j=1;j<=i;j++){
        if(i==1 or j==1 or j==i){
          if(j==i){
            cout<<">";
          }
          else{
            cout<<"> ";
          }
        }
        else{
          cout<<"  ";
        }
      }
      cout<<"\n";
    }

    //lower half
    for(int i=n;i>=1;i--){
      //space (i-1)
      for(int j=1;j<=(i-1);j++){
        cout<<" ";
      }
      //star(i)
      for(int j=1;j<=i;j++){
        if(i==1 or j==1 or j==i){
          if(j==i){
            cout<<">";
          }
          else{
            cout<<"> ";
          }
        }
        else{
          cout<<"  ";
        }
      }
      cout<<"\n";
    }
    return 0;
}