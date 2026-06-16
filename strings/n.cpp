//count words
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin,s);
    int n = s.size();
    int count = 0;
    for(int i=0;i<n;i++){
      if(s[i]==' ') count++;
    }
    cout<<(count+1);
    return 0;
}