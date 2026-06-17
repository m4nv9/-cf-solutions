// /binary search - works only on sorted data
//start search from middle element
//mid = l+r/2
// l = 0
// r = n-1
//change l and r depending on what side the value might lie
//repeated until element is found


//binary search


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
    int target; cin>>target;
    int l = 0;
    int r = n-1;
    bool flag = false;  

    while(l<=r){
    int mid = (l+r)/2;
    if(arr[mid]==target){
      flag = true;
      break;
    }
    else if(arr[mid]>target){
      //left side
      r = mid-1;
    }
    else{
      //right side
      l = mid + 1;
    }
    }
   if(flag) cout<<"YES";
  else cout<<"NO";
    return 0;
}

