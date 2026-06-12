#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// ll factorial(int n){
//   int ans = 1;
//   for(int i=1;i<=n;i++){
//     ans = ans * i;
//   }
//   return ans;
// }

//sum of 2 numbers 
// int sum2(int a,int b){
//   return a+b;
// }

//1 to n
// int numbers(int n){
// for(int i=1;i<=n;i++){
//   cout<<i<<"\n";
// }
// return 0;
// }

void printSquare(int n, string str){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<str;
    }
    cout<<"\n";
  }
}

void factor(int n){
  for(int i=1;i<=n;i++){
    if(n%i==0){ //n mod i
      cout<<i<<"\n";
    }  
  }
}

void factorCount(int n){
  int count = 0;
  for(int i=1;i<=n;i++){
    if(n%i==0) 
    count++;
  }
      cout<<count<<"\n";
}

void primeNumber(int n){
  int count = 0;
  for(int i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
  if(count == 2){
      cout<<"Prime Number"<<"\n";    
    }
    else{
      cout<<"Not Prime"<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //factorial
    // int fac = 1;
    // int n; cin>>n;
    // for(int i=1;i<=n;i++){
    //   fac = fac * i;
    // }
    // cout<<fac;

    //binomial coefficient

    // int n, r; cin>>n>>r;
    // int nfac = 1;
    // int rfac = 1;
    // int nrfac = 1;
    // for(int i=1;i<=n;i++){
    //   nfac = nfac*i;
    // }
    // // r fac
    // for(int i=1;i<=r;i++){
    //   rfac = rfac*i;
    // }
    // //n-r fac
    // for(int i=1;i<=(n-r);i++){
    //   nrfac = nrfac*i;
    // }
    // int ans = nfac/(rfac*nrfac);
    // cout<<ans;

    //binomial coefficient using func
    // int n,r; cin>>n>>r;
    // int nfac = factorial(n);
    // int rfac = factorial(r);
    // int nrfac = factorial((n-r));

    // cout<< nfac / (rfac*(nrfac));
  
    // cout<<sum2(3,4);
  //  numbers(8);
 
printSquare(5," * ");

//factors
//divisible by
// 15 1 3 5 15
//18 1 2 3 6 9 18 
//for any number n , smallest factor is 1
//largest factor possible is the number itself

// factor
factor(18);
factorCount(18);

//prime numbers 
  primeNumber(7);
  primeNumber(8);

  //scopes
  // #define int long long
return 0;
} 

