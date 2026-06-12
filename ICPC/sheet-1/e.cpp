#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double r, area, pi;
    pi = 3.141592653;
    cin>>r;
    area = pi * r *r;
    cout << fixed << setprecision(9);
    //prints exactly 9 digits after precision and fixed stops the rounding off
    cout<<area;
    return 0;
}