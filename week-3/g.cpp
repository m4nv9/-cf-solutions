#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(int n){
int count = 0;
for(int i=1;i<=n;i++){
  if(n%i==0){
    count++;
  }
}
if(count==2) return true;
else return false;
}

void printPrime(int n){
  for(int i=2;i<=n;i++){
      if(isPrime(i)){
        cout<<i<<" ";
      }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout<<isPrime(7)<<"\n";
    // cout<<isPrime(8);
    int n; cin>>n;
    //print prime numbers 
    printPrime(n);
    return 0;
}