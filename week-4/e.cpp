//search in an array
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    //using a break statement is better
    //avoid overriding
    bool flag = false;

    //searching in arr
    for(int i=0;i<n;i++){
      if(arr[i]==x){
        flag = true;
      }
  }

  if(flag==true) cout<<"YES";
  else cout<<"NO";

    
    return 0;
}