//sort 01
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //whole process repeated t times
    int t; cin>>t;
    while(t--){ //prevent infinite loop
      //array creation
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)  cin>>arr[i];
    //counting
    int zerocount=0, onecount = 0;

    for(int i=0;i<n;i++){
      if(arr[i]==0) zerocount++;
      else if(arr[i]==1) onecount++;
    }

    //printing 0
    for(int i=0;i<zerocount;i++) cout<<"0"<<" ";
    //printing 1
    for(int i=0;i<onecount;i++) cout<<"1"<<" ";

    cout<<"\n";
    }
    
    return 0;
}