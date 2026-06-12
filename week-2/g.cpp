#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int positive = 0;
  int negative = 0;
  int even = 0;
  int odd = 0;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    if (x > 0)
      positive++;
    if (x < 0)
      negative++;
    if (x % 2 == 0)
      even++;
    if (x % 2 != 0)
      odd++;
  }
  cout << positive << "\n";
  cout << negative << "\n";
  cout << even << "\n";
  cout << odd << "\n";
  return 0;
}