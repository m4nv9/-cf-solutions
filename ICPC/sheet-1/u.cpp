//float or int
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double n; cin>>n;


    int integer_part = int(n);
    double decimalpart = n-integer_part;
    if(decimalpart==0) cout<<"int "<<integer_part;
    else cout<<"float "<<integer_part<<" "<<decimalpart;
    return 0;
}