//position in an array
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
      cin>>A[i];
    }

    for(int i=0;i<n;i++){
      if(A[i]<=10){
        cout<<"A["<<i<<"] = "<<A[i]<<"\n";
      }
    }

    return 0;
}