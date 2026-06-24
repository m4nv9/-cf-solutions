//reversing
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
    int i=0;
    int j=n-1;
    while(i<j){
      swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}