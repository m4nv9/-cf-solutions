//reverse
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    getline(cin,s);
    int n = s.size();
    int i = 0;
    int j = n-1;
    while(i<j){
      swap(s[i],s[j]);
      i++;
      j--;
    }
    cout<<s;
    return 0;
}