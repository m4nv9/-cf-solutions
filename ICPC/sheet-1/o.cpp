#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char s;
    ll a,b;
    cin>>a>>s>>b;
    if(s=='+') cout<<a+b;
    else if(s=='-') cout<<a-b;
    else if(s=='*') cout<<a*b;
    else if(s=='/') cout<<a/b;

    return 0;
}