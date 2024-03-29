#include <bits/stdc++.h>
using namespace std;

// comment out if the submission DOES NOT require you take multiple test cases
#define _MULTIPLE_TEST_CASES true
// comment out if the submission DOES NOT require you to print the case number
// #define _PRINT_CASE_NUMBER true
// comment out when submitting submission
#define _USE_INPUT_OUTPUT_FILES true

/*
=================================
THIS IS WHERE YOUR ALGO GOES
=================================
*/
void solve() { cout << 0 << endl; }
/*
=================================
ABOVE IS WHERE YOUR ALGO GOES
=================================
*/

int main(int argc, char const *argv[]) {
  // optional performance optimizations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifdef _USE_INPUT_OUTPUT_FILES
  // for getting input from input.txt file
  freopen("old_way_to_run/input.txt", "r", stdin);
  // printing the output to output.txt file
  freopen("old_way_to_run/my_ans.txt", "w", stdout);
#endif

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
