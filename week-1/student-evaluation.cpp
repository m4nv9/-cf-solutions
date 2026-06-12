#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
if(n>90) cout<<"Excellent";
else if(n>80 && n<=90) cout<<"Good";
else if(n>70 && n<=80) cout<<"Fair";
else if(n>60 && n<=70) cout<<"Meets Expectations";
else if(n<=60) cout<<"Below Par";

}