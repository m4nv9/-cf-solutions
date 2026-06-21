//mixed problem solving
//sum of digits
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //for very big numbers that long long cannot store
    string s; cin>>s;
    //traverse over the array
    int n = s.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += (s[i]-'0'); //or -48
    }

cout<<sum;
    return 0;
}