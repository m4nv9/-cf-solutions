//fizzbuzz
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    for(int i=1;i<=n;i++){
      if (i%3==0 && i%5==0) cout<<"FizzBuzz"<<"\n";
      else if(i%5==0) cout<<"Buzz"<<"\n";
      else if (i%3==0) cout<<"Fizz"<<"\n";
      else{cout<<i<<"\n";}
    }
    return 0;
}
