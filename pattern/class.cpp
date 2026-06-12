#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // while,for,do while
// while
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

  // int i = 1;
  // while (i <= 10)
  // {
  //   cout << i << "\n";
  //   i++;
  // }

  // int i = 1;
  // while (i <= 1000)
  // {
  //   cout << i << "\n";
  //   i++;
  // }

  // int n;
  // cin >> n;
  // int i = 1;
  // while (i <= n){
  //   cout << i << "\n";
  //   i++;
  // }

  // int n; cin>>n;
  // int i=n;
  // while(i>=1){
  //   cout<<i<<"\n";
  //   i--;
  // }

  // int l,r; cin>>l>>r;
  // int i = l;
  // while(i<=r){
  //   cout<<i<<"\n";
  //   i++;
  // }


// int n; cin>>n;
// int i=1;
// while(i<=n){
//   if(i%2==0) cout<<i<<"\n";
//   i++;
// }
//better way :
//int i=2, i<=n, cout<<i, i+=2

//upper case alphabets

// char ch = 'A';
// while(ch<='Z'){
//   cout<<ch<<"\n";
//   ch++;
// }

//ASCII A=65 a=97
//multiplication table
// int n; cin>>n;
// int i=1;
// while(i<=10){
//   cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
//   i++;
// }


//imp loop concept
// int n = 12469;
// int lastDigit = n%10;
// cout<<lastDigit;

//reverse
// int n; cin>>n;
// int reverse = 0;
// int i=1;
// while(n!=0){
// int lastDigit = n%10;
// n = n/10;
// reverse = reverse*10 + lastDigit;
// i++;
// }
// cout<<reverse;

//digit sum
// int sum = 0;
// int n; cin>>n;
// while(n!=0){
//   int lastDigit = n%10;
//   n = n/10;
//   sum = sum + lastDigit;
// }
// cout<<sum;

//count
// int count =0;
// int n; cin>>n;
// while(n!=0){
//   int lastDigit = n%10;
//   n=n/10;
//   count++;
// }
// cout<<count;

//palindrome 
// int n; cin>>n;
// int reverse = 0;
// int orignalValue = n;
// while(n!=0){
//   int lastDigit = n%10;
//   n = n/10;
//   reverse = reverse*10 + lastDigit;
// }
// if(orignalValue!=reverse) cout<<"NO";
// else cout<<"YES";

//for
// for(initialize,conditin,update)

    // int n; cin>>n;

    // //1 to n
    // for(int i=1;i<=n;i++){
    //   cout<<i<<"\n";  
    // }
    // //two stars
    // for(int i=1;i<=n;i++){
    //   cout<<"**"<<"\n";
    // }

    // //four stars
    // for(int i=1;i<=n;i++){
    //   cout<<"****"<<"\n";
    // }
    // cout<<endl;

    //rectangle
    // int n,m; cin>>n>>m;
    // for(int i=1;i<=n;i++){
    //   for(int j=1;j<=m;j++){
    //     cout<<"*";
    //   }
    //   cout<<"\n";
    // }

    //square
  //   int n; cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     cout<<"*"<<" ";
  //   }
  //   cout<<"\n";
  // }

  //pyramid
  // int n;cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout<<"*";
  //   }
  //   cout<<"\n";
  // }

  //inverted pyramid
  // int n;cin>>n;
  // for(int i=n;i>=1;i--){
  //   for(int j=1;j<=i;j++){
  //     cout<<"*";
  //   }
  //   cout<<"\n";
  // }

  //hollow square
  // int n;cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     if(i==1||i==n||j==1||j==n){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<"\n";
  // }

  //hollow rectangle
  // int n,m; cin>>n>>m;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=m;j++){
  //     if(i==1||i==n||j==1||j==m){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<"\n";
  // }
  //hollow pyramid
  // int n; cin>>n;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     if(i==1||i==n||j==1||j==i){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<"\n";
  // }

  //inverted hollow pyramid
  // int n; cin>>n;
  // for(int i=n;i>=1;i--){
  //   for(int j=1;j<=i;j++){
  //     if(i==1||i==n||j==1||j==i){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<"\n";
  // }

  //numbered rectangle
  // int n,m;
  // cin>>n>>m;
  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=m;j++){
  //     cout<<i;
  //   }
  //   cout<<"\n";
  // }

  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=m;j++){
  //     cout<<j;
  //   }
  //   cout<<"\n";
  // }

  //alphabets
// int n,m; cin>>n>>m;
// for(int i=1;i<=n;i++){
//   char ch='A';
//   for(int j=1;j<=m;j++){
//     cout<<ch;
//     ch++;
//   }
//   cout<<"\n";
// }
//output does not depend on i
//abcdefg
//abcdefg
//abcdefg


//aaaaaaa
//bbbbbbb
//output depends on i
// int n,m; cin>>n>>m;
//   char ch='A';
// for(int i=1;i<=n;i++){
//   for(int j=1;j<=m;j++){
//     cout<<ch;
//   }
//   cout<<"\n";
//   ch++;
// }

   return 0;
}