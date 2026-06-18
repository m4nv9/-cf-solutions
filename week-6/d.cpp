//selection sort trace
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //array
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    //through the array
    for(int i=0;i<n-1;i++){
      //min element
      int min = arr[i]; //first element
      int loc = i; //loc of first element
      for(int j=i;j<n;j++){ //i because i-n-1 is the unsorted region
        if(arr[j]<min){ //if current is smaller than min
          min = arr[j]; //updation
          loc = j;
        }
      }
      swap(arr[i],arr[loc]); //min element being swapped with first element of unsorted region

      //printing every pass
      cout<<"Pass "<<i+1<<": "; //array
      for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
      }
      cout<<", "<<"min_selected = "<<min<<"\n";
    }
    
    return 0;
}