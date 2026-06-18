//sorting is re arranging of data
//no in built functions to be used
//asc or desc order
//goal is to re arrange in ascen

//selection, bubble,insertion (basic)
//merge,heap,quick (Adv)

//selection sort

//1, min array of entire element at arr[0]
//select the min from unsorted region and bring it to the front using swapping and repeat until the array is sorted

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

    //find min
    for(int i=0;i<n;i++){
      //finding min in unsorted region
      //assuming min element is first a[i]
      int min = arr[i]; //first element of unsorted region
      int loc = i; //location of the first element of unsorted region
      for(int j=i;i<n;i++){
        if(arr[j]<min){
          min = arr[j];
          loc = j;
        }
      }
      swap(arr[i],arr[loc]); //loc is the first element of the unforted region
    }

    return 0;
}