//palindrome
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
    bool isPalindrome = true;  

    while(i<j){
      if(s[i]!=s[j]){
            isPalindrome = false;
            break;
            }
            else{
              i++;
              j--;
            }
      }
      if(isPalindrome==true) cout<<"YES";
     else cout<<"NO";
    
    return 0;
    }
