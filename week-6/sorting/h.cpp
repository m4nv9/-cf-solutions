//merge two sorted arrays
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;
    int a[n];
    int b[m];

    //input of array one
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    
     //input of array two
    for(int i=0;i<m;i++){
      cin>>b[i];
    }
    //merged array
    int c[n+m];
    //3 pointers for 3 arrays
    int i=0,j=0,k=0;

    while(i<n && j<m){
      if(a[i]<b[j]){ //whichever value is smaller goes first in c array
        c[k]=a[i]; //element from array a to c 
        i++; //a pointer to next
      }
      else{
        c[k]=b[j]; //element from array b to c
        j++; //b pointer to next
      }
      k++; //pointer to next after every element is added
    }

    //copying the left over elements

    //copying left over elements from array a to c
    while(i<n){
      c[k]=a[i];
      i++; 
      k++;
    }
    //copying left over elements from array b to c
    while(j<m){
      c[k]=b[j];
      j++;
      k++;
    }
    
    //printing merged array
    for(int i = 0;i<(n+m);i++){
      cout<<c[i]<<" ";
    }
    return 0;
}