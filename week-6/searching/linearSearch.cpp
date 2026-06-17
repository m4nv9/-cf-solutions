//linear searching - one by one


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
    bool flag = false;

    for(int i=0; i<n;i++){
      if(target==arr[i]){
        flag = true;
        break;
      } 
    }
    if(flag==true) cout<<"Present";
    else cout<<"Not Present";
    return 0;

    // if data is sorted in ascending order
//key element cannot be found ahead of a specific element 14,15
//break early when (current element)a[i]>target
