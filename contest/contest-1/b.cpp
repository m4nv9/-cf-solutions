#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char ch; cin>>ch;
    string isVowel;
    for(int i='a';i<=ch;i++){
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        isVowel="YES";
      }
      else{
        isVowel="NO";
      }
    }
    cout<<isVowel;
    return 0;
}