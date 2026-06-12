#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    //upper half triangle
    for(int i=1;i<n;i++){
      //space
      for(int j=1;j<=(n-i);j++){
        cout<<" ";
      }
      //star
      for(int j=1;j<=i;j++){
       if(i==1||j==1||j==i){
        cout<<"* ";
       }
       else{
        cout<<"  ";
       }
      }
      cout<<"\n";
    }

    //inverted half triangle
       for(int i=n;i>=1;i--){
      //space
      for(int j=1;j<=(n-i);j++){
        cout<<" ";
      }
      //star
      for(int j=1;j<=i;j++){
        if(i==1||j==1||j==i){
        cout<<"* ";
       }
       else{
        cout<<"  ";
       }
      }
      cout<<"\n";
    }

    return 0;
}