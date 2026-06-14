#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  char ch;
  cin >> ch;
  if (ch >= 'a' && ch <= 'z')
    cout << "Lowercase";
  else if (ch >= 'A' && ch <= 'Z')
    cout << "Uppercase";
  else if (ch >= '0' && ch <= '9')
    cout << "Digit";
  else
    cout << "Special";

  return 0;
}