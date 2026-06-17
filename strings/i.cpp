//trim spaces
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin,s); //prefered over cin with strings

    for(int i=0;i<s.size();){
      if(s[i]==' '){ //char to char
        s.erase(i,1);
      }
      else{
        i++;
      }
    }
cout<<s;
    return 0;
}