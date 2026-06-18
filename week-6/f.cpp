
//insertion sort trace
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

    for(int i=1;i<n;i++){ //picking up first element we start comparison from i = 1
      //swapping
      int shifts = 0;
    for(int j=i;j>0;j--){
      if(arr[j]<arr[j-1]){
      swap(arr[j],arr[j-1]);
      shifts++;
      }
      else{
        break;
      }
    }
    //passed
    cout<<"Pass "<<i<<": ";
    //array
    for(int k=0;k<n;k++){
      cout<<arr[k]<<" ";
    }
    cout<<", ";
    //sorted region (0 to i)
    for(int k=0;k<=i;k++){
      cout<<arr[k]<<" ";
    }

    cout<<"| ";

    //unsorted region (i+1 to n-1)

    for(int k=(i+1);k<=(n-1);k++){
      cout<<arr[k]<<" ";
    }
    
    cout<<", "<<"shifts = "<<shifts<<"\n";
    }

    return 0;
}