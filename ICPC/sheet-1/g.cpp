#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, sum = 0;
    cin>>n;
     //avoid garbage value 

     //loop will get a tle incase n is too large, use mathematical formula
    sum = (n*(n+1)/2); //formula for summation of n natural numbers
    cout<<sum;
    return 0;
}