#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //arr
    int n; cin>>n;
    int arr[n+1]; //n+1 because we used 1 based indexing
    for(int i=1;i<=n;i++){
      cin>>arr[i];
    }

    //index and max element 
    int max = arr[1];
    int index = 1;

    //find max element 
    for(int i=1;i<=n;i++){
      //compare and update
      if(arr[i]>max){
        max=arr[i];
        index = i;
      }
    }

    cout<<max<<" "<<index;

    return 0;
}