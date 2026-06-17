// binary search in string
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // names in lexicographical order
  int n;
  cin >> n;
  string names[n];
  for (int i = 0; i < n; i++)
  {
    cin >> names[i];
  }
  // names are in ascending order
  // target name
  string key;
  cin >> key;
  bool flag = false;
  int l = 0;
  int r = n - 1;
  while (l <= r)
  {
    int mid=(l + r)/2;
      if((names[mid]==key)){
      flag = true;
      break;
      }
      else if(names[mid]>key){
      r = mid - 1; // left side
      }
      else{
      l = mid + 1; // right side
      }
    }
  if (flag)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}