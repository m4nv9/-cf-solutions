#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b;
    cin>>a>>b;
    double x = (double)a/b; 
    //brackets on double because converting before dividing
    //converting the division to double to avoid int div
    cout<<"floor "<<a<<" / "<<b<<" "<<"= "<<floor(x)<<"\n";
    cout<<"ceil "<<a<<" / "<<b<<" "<<"= "<<ceil(x)<<"\n";
    cout<<"round "<<a<<" / "<<b<<" "<<"= "<<round(x)<<"\n";
    return 0;
}