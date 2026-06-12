//2d arrays
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //1 d array 
    // int arr[10];

    // int arr[5][6]; //rows and cols
    // arr[2][2]=10; //changing value at anu position
    // cout<<arr[2][2];

//input 
int n,m; cin>>n>>m;
int arr[n][m];

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cin>>arr[i][j];
  }
}

//display 2d array
//row wise
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cout<<arr[i][j]<<" ";
  }
  cout<<"\n";
}

//coloumn wise
for(int j=0;j<m;j++){
  for(int i=0;i<n;i++){
    cout<<arr[i][j]<<" ";
  }
}

//wave (row wise)
    for(int i=0;i<n;i++){
      //left to right for even index
      if(i%2==0){
        //left to right
        for(int j=0;j<m;j++){
          cout<<arr[i][j]<<" ";
        }
      }
      else{
        //right to left
        for(int j=(m-1);j>=0;j--){
          cout<<arr[i][j]<<" ";
        }
      }
    }

    //wave (coloumn wise)
    for(int j=0;j<m;j++){
      //up to down when col is even
      if(j%2==0){
        for(int i=0;i<n;i++){
          cout<<arr[i][j]<<" ";
        }
      }
      //bottom to up when col is odd
      else{
        for(int i=(n-1);i>=0;i--){
          cout<<arr[i][j]<<" ";
        }
      }
    }
  //only boundary elements

  
  //row is always 0
  for(int j=0;j<m;j++){
    cout<<arr[0][j]<<" ";
  }
//col is m-1
  for(int i=1;i<n;i++){
    cout<<arr[i][m-1]<<" ";
  }
//row is n-1
for(int j=(m-2);j>=0;j--){
  cout<<arr[n-1][j]<<" ";
}
 //col is always 0
for(int i=(n-2);i>=0;i--){
  cout<<arr[i][0];
}
    return 0;
}