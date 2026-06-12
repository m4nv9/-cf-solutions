#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char x;
    cin>>x;

    //is digit
    if(x>='0' && x<='9') cout<<"IS DIGIT\n";
    else if (x>='A' && x<='Z') cout<<"ALPHA"<<"\n"<<"IS CAPITAL";
    else if(x>='a' && x<='z'){
      cout<<"ALPHA"<<"\n"<<"IS SMALL";
    }

    return 0;
}