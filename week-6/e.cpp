// bubble sort trace
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

    // passes
    for (int l = 0; l < (n - 1); l++)
    {
      int swaps = 0; //re setting swaps after every pass
      // bubble sort
        // comparing
        for (int j = 0; j < (n - 1); j++)
        {
          if (arr[j] > arr[j + 1])
          {
            swap(arr[j], arr[j + 1]);
            swaps++; //upgrading swaps in a single pass
          }
        }

        // printing passes
        cout << "Pass " << l << ": ";
        for (int k = 0; k < n; k++)
        {
          cout << arr[k] << " ";
        }
        cout << ", swaps = " << swaps;
        cout << "\n";
        if (swaps == 0)
          break;
      }

    return 0;
  }