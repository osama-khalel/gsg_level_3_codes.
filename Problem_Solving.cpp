#include <bits/stdc++.h>
using namespace std;
#define Fast                      \
  {                               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
  }
#define ll long long
vector<string> Act = {"Swimming", "Running", "Football"};
int n, countt = 0;
void sol(int day, vector<string> &B, string prev)
{
  if (day == n)
  {
    ++countt;
    for (int i = 0; i < n; i++)
    {
      cout << B[i] << (i == n - 1 ? "\n" : " ");
    }
    return;
  }

  for (string A : Act)
  {
    if (A != prev)
    {
      B.push_back(A);
      sol(day + 1, B, A);
      B.pop_back();
    }
  }
}
signed main()
{
  Fast int t = 1;
  // cin >> t;
  while (t--)
  {
    cin >> n;
    vector<string> arr;
    sol(0, arr, "");
    cout << "COUNT: " << countt << '\n';
  }
}

