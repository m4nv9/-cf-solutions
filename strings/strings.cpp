#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // char x,y; cin>>x>>y;
    // if(x==y) cout<<"YES";
    // else cout<<"NO";
  //ascii
  //a-97
  //A-65
  //0-48 (char form 0)
  // char x = 'a';
  // cout<<(int)x;
  // int y = 98;
  // cout<<(char)y;  
  //storing + converting char ch = x;

  //checking lower case alphabet
  // char ch; cin>>ch;
  // if(ch>='a' && ch<='z') //automatically converted
  // cout<<"lowercase";
  // else cout<<"no";

  // char ch; cin>>ch;
  // if(ch>='A' && ch<='Z'){
  //   char lowerCase=(int)ch+32; //converting
  //   cout<<lowerCase;
  // }
  // else cout<<"already lower case";

  // char ch; cin>>ch;
  // if(ch>='a' && ch<='z') cout<<"Lowercase";
  // else if(ch>='A' && ch<='Z') cout<<"Uppercase";
  // else if(ch>='0' && ch<='9') cout<<"Digit";
  // else cout<<"Special";

  //take entire line
  string s;
  getline(cin,s);
  cout<<s;
    return 0;
}