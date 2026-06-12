#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x,y;
cin>>x>>y;
if(x==0 && y==0) cout<<"Origin";
else if(y==0 && x!=0) cout<<"X axis";
else if(x==0 && y!=0) cout<<"Y axis";
else if(x>0 && y>0) cout<<"1st Quadrant";
else if(x<0 && y>0) cout<<"2nd Quadrant";
else if(x<0 && y<0) cout<<"3rd Quadrant";
else if(x>0 && y<0) cout<<"4th Quadrant";
}