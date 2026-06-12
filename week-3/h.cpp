#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void countZeros(ll n){
  //edge case for 0
  if(n==0){ 
  cout<<1;
  return; 
}
  int count = 0;
  //looping through n

  while(n>0){
    int digit = n%10; //last digit
    if(digit==0) count++; //checking if its 0
    n = n/10; //dropping it
  }
  cout<<count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
    countZeros(n);
    return 0;
}