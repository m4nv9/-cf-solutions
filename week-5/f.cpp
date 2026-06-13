//col sum
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

   
    for(int j=0;j<m;j++){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i][j]; //adding up current element
        }
         cout<<sum<<" "; //each col sum
    }

    return 0;
}