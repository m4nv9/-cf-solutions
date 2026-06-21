//compress string
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
      string s; cin>>s;
   int n = s.size();
   int i = 0;
   while(i<n){
    int j = i; //current pointer at i
    int count = 0; 
    //traversing 
    while(j<n && s[i]==s[j]){
      count++; //checking if current element is similar to previous element
      j++; //changing current element
    }
    cout<<s[i];
    if(count>1) cout<<count;
    i=j; //entering new group
   }
   cout<<"\n";
    }
   return 0;
}