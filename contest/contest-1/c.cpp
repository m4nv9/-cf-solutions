//second last digit
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
    int lastDigit = n%10;
    n=n/10;
    int secondLastDigit = n%10;
    n=n/10;
    cout<<secondLastDigit;
    return 0;
  }