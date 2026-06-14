//dictionary order - lexicographical
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,t; cin>>s>>t;
    if(s<t) cout<<'A';
    else if(t<s) cout<<'B';
    else if(t==s) cout<<"Equal";

    return 0;
}