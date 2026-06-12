//is array sorted
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    bool flag = false;
    //array
    for(int i=1;i<n;i++){ //since a[0] has no last element
      if(arr[i]>=arr[i-1]){
    }
    else flag = true;
  }
  if(flag==true) cout<<"NO";
  else cout<<"YES";
    return 0;
}