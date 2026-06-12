//min in an arr
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int arr[n+1]; //for 1 based indexing
    for(int i =1;i<=n;i++){
      cin>>arr[i];
    }

    //min
    int min = arr[1];
    int loc = 1;

    for(int i=1;i<=n;i++){
      if(arr[i]<min){
        min = arr[i];
        loc = i;
      }
    }
    
    cout<<min<<" "<<loc;
    return 0;
}