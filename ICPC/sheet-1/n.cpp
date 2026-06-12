#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //the upper and lower case letters differ by 32 in ascii values 
    char x;
    cin>>x;
    if(x>='A' && x<='Z') x=x+32;
    else if(x>='a' && x<='z') x=x-32;
    cout<<x;
    return 0;
}