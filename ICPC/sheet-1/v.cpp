//comparison
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b;
    string s;
    cin>>a>>s>>b;

    if(a>b && s==">") cout<<"Right";
    else if(a<b && s=="<") cout<<"Right";
    else if(a==b && s=="=") cout<<"Right";
    else cout<<"Wrong";

    return 0;
}