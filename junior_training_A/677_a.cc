// https://codeforces.com/contest/677/problem/A
#include <bits/stdc++.h>
using namespace std;

// uncomment this line when submitting
// #define _MY_TEST_FILES true
// uncomment if the submission DOES NOT require you take multiple test cases
// #define _MULTIPLE_TEST_CASES true
// uncomment if the submission DOES NOT require you to print the case number
// #define _PRINT_CASE_NUMBER true

/*
=================================
THIS IS WHERE YOUR ALGO GOES
=================================
*/
void solve() {
  int n = 0;
  int h = 0;
  cin >> n;
  cin >> h;
  vector<int> friends(n, 0);

  for (int i = 0; i < n; ++i) {
    int tmp = 0;
    cin >> tmp;
    friends[i] = tmp;
  }

  int res = 0;
  for (int i : friends) {
    res++;
    if (i > h)
      res++;
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
