#include <bits/stdc++.h>
using namespace std;

// comment out this line when submitting
#define _MY_TEST_FILES true
// comment out if the submission DOES NOT require you take multiple test cases
#define _MULTIPLE_TEST_CASES true
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
  string s = "";
  cin >> s;

  string res = s;
  int i = 0;
  int j = n - 1;
  while (!s.empty()) {
    res[j--] = s.back();
    s.pop_back();
    if (s.empty()) {
      break;
    }
    res[i++] = s.back();
    s.pop_back();
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

#ifdef _MY_TEST_FILES
  // for getting input from input.txt file
  freopen("input.txt", "r", stdin);
  // printing the output to output.txt file
  freopen("my_ans.txt", "w", stdout);
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
