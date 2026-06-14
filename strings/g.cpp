//replace
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    char c1,c2;
    cin>>s>>c1>>c2;

    int n = s.size(); //elements in string

    for(int i=0;i<n;i++){
      if(s[i]==c1){
        s[i]=c2; //replace
      }
    }
    cout<<s;
    return 0;
}