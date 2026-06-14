//remove
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin>>s;
    char x; cin>>x;

   
    for(int i=0;i<s.size();){
      if(s[i]==x){
        s.erase(i,1); //starting position and number of chars to delete
      }
      else{
        i++; //only moving forward when none is deleted
      }
    }
    cout<<s;
    return 0;
}