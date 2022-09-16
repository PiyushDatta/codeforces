#include <bits/stdc++.h>
using namespace std;

// comment out if the submission DOES NOT require you take multiple test cases
// #define _MULTIPLE_TEST_CASES true
// comment out if the submission DOES NOT require you to print the case number
// #define _PRINT_CASE_NUMBER true

/*
=================================
THIS IS WHERE YOUR ALGO GOES
=================================
*/
void solve() {
  int n = 0;
  cin >> n;
  n--;
  vector<int> years(n);

  for (int i = 0; i < n; ++i) {
    cin >> years[i];
  }

  int a = 0;
  int b = 0;
  cin >> a;
  cin >> b;

  int res = 0;
  for (int i = (a - 1); i < n; ++i) {
    if (i == (b - 1))
      break;
    res += years[i];
  }

  cout << res << endl;
}
/*
=================================
ABOVE IS WHERE YOUR ALGO GOES
=================================
*/

int main(int argc, char const *argv[]) {
  // optional performance optimizations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifdef _MULTIPLE_TEST_CASES
  // keep this, testcases
  int t = 0;
  cin >> t;

  // now we can run our algo
  for (int i = 1; i <= t; ++i) {
#ifdef _PRINT_CASE_NUMBER
    cout << "Case #" << i << ": ";
#endif
    solve();
  }
#else
  solve();
#endif

  return 0;
}
