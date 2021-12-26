// https://codeforces.com/contest/66/problem/B
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
int check(vector<int> &plots, int i) {
  int n = plots.size();
  int res = 1;

  for (int j = i; j < n-1; ++j) {
    if (plots[j] >= plots[j+1]) ++res;
    else break;
  }

  for (int j =i; j>0; --j) {
    if (plots[j] >= plots[j-1]) ++res;
    else break;
  }

  return res;
}
void solve() {
  int n = 0;
  cin >> n;

  vector<int> plots(n, 0);
  for (int i = 0; i < n; ++i) {
    int tmp = 0;
    cin >> tmp;
    plots[i] = tmp;
  }

  int res = 0;
  for (int i=0; i<n; ++i) {
    res = max(res, check(plots, i));
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
