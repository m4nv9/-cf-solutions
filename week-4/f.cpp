//current occurances
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    //counting
    int count = 0;
    for(int i=0;i<n;i++){
      if(arr[i]==x) count++;
    }

    cout<<count;
    return 0;
}