//reverse array
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

    //reversing array
    int i = 0;
      int k = n-1; //initializing indexes

      while(i<=k){ //i crosses k
        swap(arr[i],arr[k]); //swapping values
        i++; 
        k--;
      }
    
//printing reversed array
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }

    return 0;
}