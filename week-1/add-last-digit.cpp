#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
 //in case input is -ve
int sum = abs(n%10) + abs(m%10);
cout<<sum;
}