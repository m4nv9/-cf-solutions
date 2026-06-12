#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

//finds factorial for n r and n-r
int nCr(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans * i;
    }
    return ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //input
    int n,r; 
    cin>>n>>r;
    //individual values
    int nfac = nCr(n);
    int rfac = nCr(r);
    int nrfac = nCr(n-r);
    //adding in the formula
    cout<<nfac/(rfac*(nrfac));
    return 0;
}