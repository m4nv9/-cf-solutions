#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    string isLeapYear;
    //is divisible by 100 and 400
    if(n%100==0){
      if(n%400==0){
        isLeapYear = "Yes";
      }
      else{
        isLeapYear = "No";
      }
    }
    //if not is divisible by 4
    else{
      if(n%4==0){
        isLeapYear = "Yes";
      }
      else{
        isLeapYear = "No";
      }
    }
cout<<isLeapYear;
    return 0;
}